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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_PRODUCTSTATUSINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_PRODUCTSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 产品试用状态查询接口Data出参
                */
                class ProductStatusInfo : public AbstractModel
                {
                public:
                    ProductStatusInfo();
                    ~ProductStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取防护状态，1未防护，2防护中，3试用中，4已过期
                     * @return FWUserStatus 防护状态，1未防护，2防护中，3试用中，4已过期
                     * 
                     */
                    uint64_t GetFWUserStatus() const;

                    /**
                     * 设置防护状态，1未防护，2防护中，3试用中，4已过期
                     * @param _fWUserStatus 防护状态，1未防护，2防护中，3试用中，4已过期
                     * 
                     */
                    void SetFWUserStatus(const uint64_t& _fWUserStatus);

                    /**
                     * 判断参数 FWUserStatus 是否已赋值
                     * @return FWUserStatus 是否已赋值
                     * 
                     */
                    bool FWUserStatusHasBeenSet() const;

                    /**
                     * 获取是否可以申请试用，true可以申请
                     * @return CanApplyTrial 是否可以申请试用，true可以申请
                     * 
                     */
                    bool GetCanApplyTrial() const;

                    /**
                     * 设置是否可以申请试用，true可以申请
                     * @param _canApplyTrial 是否可以申请试用，true可以申请
                     * 
                     */
                    void SetCanApplyTrial(const bool& _canApplyTrial);

                    /**
                     * 判断参数 CanApplyTrial 是否已赋值
                     * @return CanApplyTrial 是否已赋值
                     * 
                     */
                    bool CanApplyTrialHasBeenSet() const;

                    /**
                     * 获取无法试用原因，可试用为空
                     * @return CanNotApplyReason 无法试用原因，可试用为空
                     * 
                     */
                    std::string GetCanNotApplyReason() const;

                    /**
                     * 设置无法试用原因，可试用为空
                     * @param _canNotApplyReason 无法试用原因，可试用为空
                     * 
                     */
                    void SetCanNotApplyReason(const std::string& _canNotApplyReason);

                    /**
                     * 判断参数 CanNotApplyReason 是否已赋值
                     * @return CanNotApplyReason 是否已赋值
                     * 
                     */
                    bool CanNotApplyReasonHasBeenSet() const;

                    /**
                     * 获取上次试用结束时间（不存在试用记录则为空）
                     * @return LastTrialTime 上次试用结束时间（不存在试用记录则为空）
                     * 
                     */
                    std::string GetLastTrialTime() const;

                    /**
                     * 设置上次试用结束时间（不存在试用记录则为空）
                     * @param _lastTrialTime 上次试用结束时间（不存在试用记录则为空）
                     * 
                     */
                    void SetLastTrialTime(const std::string& _lastTrialTime);

                    /**
                     * 判断参数 LastTrialTime 是否已赋值
                     * @return LastTrialTime 是否已赋值
                     * 
                     */
                    bool LastTrialTimeHasBeenSet() const;

                private:

                    /**
                     * 防护状态，1未防护，2防护中，3试用中，4已过期
                     */
                    uint64_t m_fWUserStatus;
                    bool m_fWUserStatusHasBeenSet;

                    /**
                     * 是否可以申请试用，true可以申请
                     */
                    bool m_canApplyTrial;
                    bool m_canApplyTrialHasBeenSet;

                    /**
                     * 无法试用原因，可试用为空
                     */
                    std::string m_canNotApplyReason;
                    bool m_canNotApplyReasonHasBeenSet;

                    /**
                     * 上次试用结束时间（不存在试用记录则为空）
                     */
                    std::string m_lastTrialTime;
                    bool m_lastTrialTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_PRODUCTSTATUSINFO_H_
