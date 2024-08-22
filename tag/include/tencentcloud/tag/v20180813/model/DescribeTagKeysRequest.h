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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGKEYSREQUEST_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGKEYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * DescribeTagKeys请求参数结构体
                */
                class DescribeTagKeysRequest : public AbstractModel
                {
                public:
                    DescribeTagKeysRequest();
                    ~DescribeTagKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取创建者用户 Uin，不传或为空只将 Uin 作为条件查询
                     * @return CreateUin 创建者用户 Uin，不传或为空只将 Uin 作为条件查询
                     * 
                     */
                    uint64_t GetCreateUin() const;

                    /**
                     * 设置创建者用户 Uin，不传或为空只将 Uin 作为条件查询
                     * @param _createUin 创建者用户 Uin，不传或为空只将 Uin 作为条件查询
                     * 
                     */
                    void SetCreateUin(const uint64_t& _createUin);

                    /**
                     * 判断参数 CreateUin 是否已赋值
                     * @return CreateUin 是否已赋值
                     * 
                     */
                    bool CreateUinHasBeenSet() const;

                    /**
                     * 获取数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     * @return Offset 数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     * @param _offset 数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页大小，默认为 15，最大1000
                     * @return Limit 每页大小，默认为 15，最大1000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页大小，默认为 15，最大1000
                     * @param _limit 每页大小，默认为 15，最大1000
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取是否展现项目。1:展示  0:不展示
                     * @return ShowProject 是否展现项目。1:展示  0:不展示
                     * 
                     */
                    uint64_t GetShowProject() const;

                    /**
                     * 设置是否展现项目。1:展示  0:不展示
                     * @param _showProject 是否展现项目。1:展示  0:不展示
                     * 
                     */
                    void SetShowProject(const uint64_t& _showProject);

                    /**
                     * 判断参数 ShowProject 是否已赋值
                     * @return ShowProject 是否已赋值
                     * 
                     */
                    bool ShowProjectHasBeenSet() const;

                    /**
                     * 获取标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * @return Category 标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * @param _category 标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * 创建者用户 Uin，不传或为空只将 Uin 作为条件查询
                     */
                    uint64_t m_createUin;
                    bool m_createUinHasBeenSet;

                    /**
                     * 数据偏移量，默认为 0, 必须为Limit参数的整数倍
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页大小，默认为 15，最大1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否展现项目。1:展示  0:不展示
                     */
                    uint64_t m_showProject;
                    bool m_showProjectHasBeenSet;

                    /**
                     * 标签类型。取值： Custom：自定义标签。 System：系统标签。 All：全部标签。 默认值：All。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_DESCRIBETAGKEYSREQUEST_H_
