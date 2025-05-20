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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DISKCHARGEPREPAID_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DISKCHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述了实例的计费模式
                */
                class DiskChargePrepaid : public AbstractModel
                {
                public:
                    DiskChargePrepaid();
                    ~DiskChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取购买云硬盘的时长，默认单位为月，取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。
                     * @return Period 购买云硬盘的时长，默认单位为月，取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置购买云硬盘的时长，默认单位为月，取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。
                     * @param _period 购买云硬盘的时长，默认单位为月，取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取自动续费标识。取值范围：
<ul>
  <li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
  <li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费</li>
  <li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
</ul>
默认取值：NOTIFY_AND_MANUAL_RENEW。
                     * @return RenewFlag 自动续费标识。取值范围：
<ul>
  <li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
  <li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费</li>
  <li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
</ul>
默认取值：NOTIFY_AND_MANUAL_RENEW。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置自动续费标识。取值范围：
<ul>
  <li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
  <li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费</li>
  <li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
</ul>
默认取值：NOTIFY_AND_MANUAL_RENEW。
                     * @param _renewFlag 自动续费标识。取值范围：
<ul>
  <li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
  <li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费</li>
  <li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
</ul>
默认取值：NOTIFY_AND_MANUAL_RENEW。
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取需要将云硬盘的到期时间与挂载的子机对齐时，可传入该参数。该参数表示子机当前的到期时间，此时Period如果传入，则表示子机需要续费的时长，云盘会自动按对齐到子机续费后的到期时间续费.
                     * @return CurInstanceDeadline 需要将云硬盘的到期时间与挂载的子机对齐时，可传入该参数。该参数表示子机当前的到期时间，此时Period如果传入，则表示子机需要续费的时长，云盘会自动按对齐到子机续费后的到期时间续费.
                     * 
                     */
                    std::string GetCurInstanceDeadline() const;

                    /**
                     * 设置需要将云硬盘的到期时间与挂载的子机对齐时，可传入该参数。该参数表示子机当前的到期时间，此时Period如果传入，则表示子机需要续费的时长，云盘会自动按对齐到子机续费后的到期时间续费.
                     * @param _curInstanceDeadline 需要将云硬盘的到期时间与挂载的子机对齐时，可传入该参数。该参数表示子机当前的到期时间，此时Period如果传入，则表示子机需要续费的时长，云盘会自动按对齐到子机续费后的到期时间续费.
                     * 
                     */
                    void SetCurInstanceDeadline(const std::string& _curInstanceDeadline);

                    /**
                     * 判断参数 CurInstanceDeadline 是否已赋值
                     * @return CurInstanceDeadline 是否已赋值
                     * 
                     */
                    bool CurInstanceDeadlineHasBeenSet() const;

                private:

                    /**
                     * 购买云硬盘的时长，默认单位为月，取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 自动续费标识。取值范围：
<ul>
  <li>NOTIFY_AND_AUTO_RENEW：通知过期且自动续费</li>
  <li>NOTIFY_AND_MANUAL_RENEW：通知过期不自动续费</li>
  <li>DISABLE_NOTIFY_AND_MANUAL_RENEW：不通知过期不自动续费</li>
</ul>
默认取值：NOTIFY_AND_MANUAL_RENEW。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 需要将云硬盘的到期时间与挂载的子机对齐时，可传入该参数。该参数表示子机当前的到期时间，此时Period如果传入，则表示子机需要续费的时长，云盘会自动按对齐到子机续费后的到期时间续费.
                     */
                    std::string m_curInstanceDeadline;
                    bool m_curInstanceDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISKCHARGEPREPAID_H_
