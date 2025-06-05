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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_STOPINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_STOPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * StopInstances请求参数结构体
                */
                class StopInstancesRequest : public AbstractModel
                {
                public:
                    StopInstancesRequest();
                    ~StopInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一个或多个待操作的实例ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。每次请求批量实例的上限为100。
                     * @return InstanceIds 一个或多个待操作的实例ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。每次请求批量实例的上限为100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置一个或多个待操作的实例ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。每次请求批量实例的上限为100。
                     * @param _instanceIds 一个或多个待操作的实例ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。每次请求批量实例的上限为100。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取本参数已弃用，推荐使用StopType，不可以与参数StopType同时使用。表示是否在正常关闭失败后选择强制关闭实例。取值范围：<br><li>true：表示在正常关闭失败后进行强制关闭</li><li>false：表示在正常关闭失败后不进行强制关闭</li><br>默认取值：false。
                     * @return ForceStop 本参数已弃用，推荐使用StopType，不可以与参数StopType同时使用。表示是否在正常关闭失败后选择强制关闭实例。取值范围：<br><li>true：表示在正常关闭失败后进行强制关闭</li><li>false：表示在正常关闭失败后不进行强制关闭</li><br>默认取值：false。
                     * @deprecated
                     */
                    bool GetForceStop() const;

                    /**
                     * 设置本参数已弃用，推荐使用StopType，不可以与参数StopType同时使用。表示是否在正常关闭失败后选择强制关闭实例。取值范围：<br><li>true：表示在正常关闭失败后进行强制关闭</li><li>false：表示在正常关闭失败后不进行强制关闭</li><br>默认取值：false。
                     * @param _forceStop 本参数已弃用，推荐使用StopType，不可以与参数StopType同时使用。表示是否在正常关闭失败后选择强制关闭实例。取值范围：<br><li>true：表示在正常关闭失败后进行强制关闭</li><li>false：表示在正常关闭失败后不进行强制关闭</li><br>默认取值：false。
                     * @deprecated
                     */
                    void SetForceStop(const bool& _forceStop);

                    /**
                     * 判断参数 ForceStop 是否已赋值
                     * @return ForceStop 是否已赋值
                     * @deprecated
                     */
                    bool ForceStopHasBeenSet() const;

                    /**
                     * 获取实例的关闭模式。取值范围：<br><li>SOFT_FIRST：表示在正常关闭失败后进行强制关闭</li><li>HARD：直接强制关闭</li><li>SOFT：仅软关机</li>默认取值：SOFT。
                     * @return StopType 实例的关闭模式。取值范围：<br><li>SOFT_FIRST：表示在正常关闭失败后进行强制关闭</li><li>HARD：直接强制关闭</li><li>SOFT：仅软关机</li>默认取值：SOFT。
                     * 
                     */
                    std::string GetStopType() const;

                    /**
                     * 设置实例的关闭模式。取值范围：<br><li>SOFT_FIRST：表示在正常关闭失败后进行强制关闭</li><li>HARD：直接强制关闭</li><li>SOFT：仅软关机</li>默认取值：SOFT。
                     * @param _stopType 实例的关闭模式。取值范围：<br><li>SOFT_FIRST：表示在正常关闭失败后进行强制关闭</li><li>HARD：直接强制关闭</li><li>SOFT：仅软关机</li>默认取值：SOFT。
                     * 
                     */
                    void SetStopType(const std::string& _stopType);

                    /**
                     * 判断参数 StopType 是否已赋值
                     * @return StopType 是否已赋值
                     * 
                     */
                    bool StopTypeHasBeenSet() const;

                    /**
                     * 获取按量计费实例关机收费模式。
取值范围：<br><li>KEEP_CHARGING：关机继续收费</li><li>STOP_CHARGING：关机停止收费</li><br>默认取值：KEEP_CHARGING。
该参数只针对部分按量计费实例生效，详情参考[按量计费实例关机不收费说明](https://cloud.tencent.com/document/product/213/19918)
                     * @return StoppedMode 按量计费实例关机收费模式。
取值范围：<br><li>KEEP_CHARGING：关机继续收费</li><li>STOP_CHARGING：关机停止收费</li><br>默认取值：KEEP_CHARGING。
该参数只针对部分按量计费实例生效，详情参考[按量计费实例关机不收费说明](https://cloud.tencent.com/document/product/213/19918)
                     * 
                     */
                    std::string GetStoppedMode() const;

                    /**
                     * 设置按量计费实例关机收费模式。
取值范围：<br><li>KEEP_CHARGING：关机继续收费</li><li>STOP_CHARGING：关机停止收费</li><br>默认取值：KEEP_CHARGING。
该参数只针对部分按量计费实例生效，详情参考[按量计费实例关机不收费说明](https://cloud.tencent.com/document/product/213/19918)
                     * @param _stoppedMode 按量计费实例关机收费模式。
取值范围：<br><li>KEEP_CHARGING：关机继续收费</li><li>STOP_CHARGING：关机停止收费</li><br>默认取值：KEEP_CHARGING。
该参数只针对部分按量计费实例生效，详情参考[按量计费实例关机不收费说明](https://cloud.tencent.com/document/product/213/19918)
                     * 
                     */
                    void SetStoppedMode(const std::string& _stoppedMode);

                    /**
                     * 判断参数 StoppedMode 是否已赋值
                     * @return StoppedMode 是否已赋值
                     * 
                     */
                    bool StoppedModeHasBeenSet() const;

                private:

                    /**
                     * 一个或多个待操作的实例ID。可通过 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728) 接口返回值中的`InstanceId`获取。每次请求批量实例的上限为100。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 本参数已弃用，推荐使用StopType，不可以与参数StopType同时使用。表示是否在正常关闭失败后选择强制关闭实例。取值范围：<br><li>true：表示在正常关闭失败后进行强制关闭</li><li>false：表示在正常关闭失败后不进行强制关闭</li><br>默认取值：false。
                     */
                    bool m_forceStop;
                    bool m_forceStopHasBeenSet;

                    /**
                     * 实例的关闭模式。取值范围：<br><li>SOFT_FIRST：表示在正常关闭失败后进行强制关闭</li><li>HARD：直接强制关闭</li><li>SOFT：仅软关机</li>默认取值：SOFT。
                     */
                    std::string m_stopType;
                    bool m_stopTypeHasBeenSet;

                    /**
                     * 按量计费实例关机收费模式。
取值范围：<br><li>KEEP_CHARGING：关机继续收费</li><li>STOP_CHARGING：关机停止收费</li><br>默认取值：KEEP_CHARGING。
该参数只针对部分按量计费实例生效，详情参考[按量计费实例关机不收费说明](https://cloud.tencent.com/document/product/213/19918)
                     */
                    std::string m_stoppedMode;
                    bool m_stoppedModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_STOPINSTANCESREQUEST_H_
