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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeBootScript请求参数结构体
                */
                class DescribeBootScriptRequest : public AbstractModel
                {
                public:
                    DescribeBootScriptRequest();
                    ~DescribeBootScriptRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取EMR实例序列号
                     * @return InstanceId EMR实例序列号
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置EMR实例序列号
                     * @param _instanceId EMR实例序列号
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取引导脚本类型，resourceAfter,clusterAfter,clusterBefore不填时表示全部时机
                     * @return BootType 引导脚本类型，resourceAfter,clusterAfter,clusterBefore不填时表示全部时机
                     * 
                     */
                    std::string GetBootType() const;

                    /**
                     * 设置引导脚本类型，resourceAfter,clusterAfter,clusterBefore不填时表示全部时机
                     * @param _bootType 引导脚本类型，resourceAfter,clusterAfter,clusterBefore不填时表示全部时机
                     * 
                     */
                    void SetBootType(const std::string& _bootType);

                    /**
                     * 判断参数 BootType 是否已赋值
                     * @return BootType 是否已赋值
                     * 
                     */
                    bool BootTypeHasBeenSet() const;

                private:

                    /**
                     * EMR实例序列号
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 引导脚本类型，resourceAfter,clusterAfter,clusterBefore不填时表示全部时机
                     */
                    std::string m_bootType;
                    bool m_bootTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEBOOTSCRIPTREQUEST_H_
