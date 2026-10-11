/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESPECSREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESPECSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeSpecs请求参数结构体
                */
                class DescribeSpecsRequest : public AbstractModel
                {
                public:
                    DescribeSpecsRequest();
                    ~DescribeSpecsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>全能型副本数，当前支持范围：1-3，默认为3</p>
                     * @return FullReplications <p>全能型副本数，当前支持范围：1-3，默认为3</p>
                     * 
                     */
                    int64_t GetFullReplications() const;

                    /**
                     * 设置<p>全能型副本数，当前支持范围：1-3，默认为3</p>
                     * @param _fullReplications <p>全能型副本数，当前支持范围：1-3，默认为3</p>
                     * 
                     */
                    void SetFullReplications(const int64_t& _fullReplications);

                    /**
                     * 判断参数 FullReplications 是否已赋值
                     * @return FullReplications 是否已赋值
                     * 
                     */
                    bool FullReplicationsHasBeenSet() const;

                    /**
                     * 获取<p>独享实例</p>
                     * @return IsExclusiveInstance <p>独享实例</p>
                     * 
                     */
                    int64_t GetIsExclusiveInstance() const;

                    /**
                     * 设置<p>独享实例</p>
                     * @param _isExclusiveInstance <p>独享实例</p>
                     * 
                     */
                    void SetIsExclusiveInstance(const int64_t& _isExclusiveInstance);

                    /**
                     * 判断参数 IsExclusiveInstance 是否已赋值
                     * @return IsExclusiveInstance 是否已赋值
                     * 
                     */
                    bool IsExclusiveInstanceHasBeenSet() const;

                    /**
                     * 获取<p>可用区组合列表</p>
                     * @return Zones <p>可用区组合列表</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>可用区组合列表</p>
                     * @param _zones <p>可用区组合列表</p>
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                private:

                    /**
                     * <p>全能型副本数，当前支持范围：1-3，默认为3</p>
                     */
                    int64_t m_fullReplications;
                    bool m_fullReplicationsHasBeenSet;

                    /**
                     * <p>独享实例</p>
                     */
                    int64_t m_isExclusiveInstance;
                    bool m_isExclusiveInstanceHasBeenSet;

                    /**
                     * <p>可用区组合列表</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBESPECSREQUEST_H_
