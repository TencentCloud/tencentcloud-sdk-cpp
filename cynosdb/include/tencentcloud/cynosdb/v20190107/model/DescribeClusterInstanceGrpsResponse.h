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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERINSTANCEGRPSRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERINSTANCEGRPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CynosdbInstanceGrp.h>
#include <tencentcloud/cynosdb/v20190107/model/CynosdbInstanceGroup.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterInstanceGrps返回参数结构体
                */
                class DescribeClusterInstanceGrpsResponse : public AbstractModel
                {
                public:
                    DescribeClusterInstanceGrpsResponse();
                    ~DescribeClusterInstanceGrpsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例组个数
                     * @return TotalCount 实例组个数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取实例组列表
                     * @return InstanceGrpInfoList 实例组列表
                     * @deprecated
                     */
                    std::vector<CynosdbInstanceGrp> GetInstanceGrpInfoList() const;

                    /**
                     * 判断参数 InstanceGrpInfoList 是否已赋值
                     * @return InstanceGrpInfoList 是否已赋值
                     * @deprecated
                     */
                    bool InstanceGrpInfoListHasBeenSet() const;

                    /**
                     * 获取实例组列表
                     * @return InstanceGroupInfoList 实例组列表
                     * 
                     */
                    std::vector<CynosdbInstanceGroup> GetInstanceGroupInfoList() const;

                    /**
                     * 判断参数 InstanceGroupInfoList 是否已赋值
                     * @return InstanceGroupInfoList 是否已赋值
                     * 
                     */
                    bool InstanceGroupInfoListHasBeenSet() const;

                private:

                    /**
                     * 实例组个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例组列表
                     */
                    std::vector<CynosdbInstanceGrp> m_instanceGrpInfoList;
                    bool m_instanceGrpInfoListHasBeenSet;

                    /**
                     * 实例组列表
                     */
                    std::vector<CynosdbInstanceGroup> m_instanceGroupInfoList;
                    bool m_instanceGroupInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERINSTANCEGRPSRESPONSE_H_
