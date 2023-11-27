/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeResourceGroup请求参数结构体
                */
                class DescribeResourceGroupRequest : public AbstractModel
                {
                public:
                    DescribeResourceGroupRequest();
                    ~DescribeResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询类型 网络结构 vpc，业务识别- resource ，资源标签-tag
                     * @return QueryType 查询类型 网络结构 vpc，业务识别- resource ，资源标签-tag
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置查询类型 网络结构 vpc，业务识别- resource ，资源标签-tag
                     * @param _queryType 查询类型 网络结构 vpc，业务识别- resource ，资源标签-tag
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取资产组id  全部传0
                     * @return GroupId 资产组id  全部传0
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置资产组id  全部传0
                     * @param _groupId 资产组id  全部传0
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取all  包含子组 own自己
                     * @return ShowType all  包含子组 own自己
                     * 
                     */
                    std::string GetShowType() const;

                    /**
                     * 设置all  包含子组 own自己
                     * @param _showType all  包含子组 own自己
                     * 
                     */
                    void SetShowType(const std::string& _showType);

                    /**
                     * 判断参数 ShowType 是否已赋值
                     * @return ShowType 是否已赋值
                     * 
                     */
                    bool ShowTypeHasBeenSet() const;

                private:

                    /**
                     * 查询类型 网络结构 vpc，业务识别- resource ，资源标签-tag
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 资产组id  全部传0
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * all  包含子组 own自己
                     */
                    std::string m_showType;
                    bool m_showTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBERESOURCEGROUPREQUEST_H_
