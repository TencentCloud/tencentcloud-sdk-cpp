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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_INQUIREPRICEMODIFYWORKSPACESCHARGETYPEREQUEST_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_INQUIREPRICEMODIFYWORKSPACESCHARGETYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/thpc/v20230321/model/SpaceChargePrepaid.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * InquirePriceModifyWorkspacesChargeType请求参数结构体
                */
                class InquirePriceModifyWorkspacesChargeTypeRequest : public AbstractModel
                {
                public:
                    InquirePriceModifyWorkspacesChargeTypeRequest();
                    ~InquirePriceModifyWorkspacesChargeTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间 ID 列表。每次请求的工作空间计费模式必须一致。</p>
                     * @return SpaceIds <p>工作空间 ID 列表。每次请求的工作空间计费模式必须一致。</p>
                     * 
                     */
                    std::vector<std::string> GetSpaceIds() const;

                    /**
                     * 设置<p>工作空间 ID 列表。每次请求的工作空间计费模式必须一致。</p>
                     * @param _spaceIds <p>工作空间 ID 列表。每次请求的工作空间计费模式必须一致。</p>
                     * 
                     */
                    void SetSpaceIds(const std::vector<std::string>& _spaceIds);

                    /**
                     * 判断参数 SpaceIds 是否已赋值
                     * @return SpaceIds 是否已赋值
                     * 
                     */
                    bool SpaceIdsHasBeenSet() const;

                    /**
                     * 获取<p>转换的目标计费模式。当前仅支持 PREPAID（按量计费转包年包月）。</p>
                     * @return SpaceChargeType <p>转换的目标计费模式。当前仅支持 PREPAID（按量计费转包年包月）。</p>
                     * 
                     */
                    std::string GetSpaceChargeType() const;

                    /**
                     * 设置<p>转换的目标计费模式。当前仅支持 PREPAID（按量计费转包年包月）。</p>
                     * @param _spaceChargeType <p>转换的目标计费模式。当前仅支持 PREPAID（按量计费转包年包月）。</p>
                     * 
                     */
                    void SetSpaceChargeType(const std::string& _spaceChargeType);

                    /**
                     * 判断参数 SpaceChargeType 是否已赋值
                     * @return SpaceChargeType 是否已赋值
                     * 
                     */
                    bool SpaceChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否只进行参数和资源预检。true：不发起询价、组单或正式下单；false：执行对应操作。默认为 false。</p>
                     * @return DryRun <p>是否只进行参数和资源预检。true：不发起询价、组单或正式下单；false：执行对应操作。默认为 false。</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>是否只进行参数和资源预检。true：不发起询价、组单或正式下单；false：执行对应操作。默认为 false。</p>
                     * @param _dryRun <p>是否只进行参数和资源预检。true：不发起询价、组单或正式下单；false：执行对应操作。默认为 false。</p>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取<p>预付费参数。Period 和 RenewFlag 均为可选字段；未传入时后端使用默认值 Period=1、RenewFlag=NOTIFY_AND_MANUAL_RENEW。</p>
                     * @return SpaceChargePrepaid <p>预付费参数。Period 和 RenewFlag 均为可选字段；未传入时后端使用默认值 Period=1、RenewFlag=NOTIFY_AND_MANUAL_RENEW。</p>
                     * 
                     */
                    SpaceChargePrepaid GetSpaceChargePrepaid() const;

                    /**
                     * 设置<p>预付费参数。Period 和 RenewFlag 均为可选字段；未传入时后端使用默认值 Period=1、RenewFlag=NOTIFY_AND_MANUAL_RENEW。</p>
                     * @param _spaceChargePrepaid <p>预付费参数。Period 和 RenewFlag 均为可选字段；未传入时后端使用默认值 Period=1、RenewFlag=NOTIFY_AND_MANUAL_RENEW。</p>
                     * 
                     */
                    void SetSpaceChargePrepaid(const SpaceChargePrepaid& _spaceChargePrepaid);

                    /**
                     * 判断参数 SpaceChargePrepaid 是否已赋值
                     * @return SpaceChargePrepaid 是否已赋值
                     * 
                     */
                    bool SpaceChargePrepaidHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间 ID 列表。每次请求的工作空间计费模式必须一致。</p>
                     */
                    std::vector<std::string> m_spaceIds;
                    bool m_spaceIdsHasBeenSet;

                    /**
                     * <p>转换的目标计费模式。当前仅支持 PREPAID（按量计费转包年包月）。</p>
                     */
                    std::string m_spaceChargeType;
                    bool m_spaceChargeTypeHasBeenSet;

                    /**
                     * <p>是否只进行参数和资源预检。true：不发起询价、组单或正式下单；false：执行对应操作。默认为 false。</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>预付费参数。Period 和 RenewFlag 均为可选字段；未传入时后端使用默认值 Period=1、RenewFlag=NOTIFY_AND_MANUAL_RENEW。</p>
                     */
                    SpaceChargePrepaid m_spaceChargePrepaid;
                    bool m_spaceChargePrepaidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_INQUIREPRICEMODIFYWORKSPACESCHARGETYPEREQUEST_H_
