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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSDEFENDSTATUSRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSDEFENDSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDDoSDefendStatus返回参数结构体
                */
                class DescribeDDoSDefendStatusResponse : public AbstractModel
                {
                public:
                    DescribeDDoSDefendStatusResponse();
                    ~DescribeDDoSDefendStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取防护状态，为0表示防护处于关闭状态，为1表示防护处于开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefendStatus 防护状态，为0表示防护处于关闭状态，为1表示防护处于开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDefendStatus() const;

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取防护临时关闭的过期时间，当防护状态为开启时此字段为空；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UndefendExpire 防护临时关闭的过期时间，当防护状态为开启时此字段为空；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUndefendExpire() const;

                    /**
                     * 判断参数 UndefendExpire 是否已赋值
                     * @return UndefendExpire 是否已赋值
                     * 
                     */
                    bool UndefendExpireHasBeenSet() const;

                    /**
                     * 获取控制台功能展示字段，为1表示控制台功能展示，为0表示控制台功能隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShowFlag 控制台功能展示字段，为1表示控制台功能展示，为0表示控制台功能隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetShowFlag() const;

                    /**
                     * 判断参数 ShowFlag 是否已赋值
                     * @return ShowFlag 是否已赋值
                     * 
                     */
                    bool ShowFlagHasBeenSet() const;

                private:

                    /**
                     * 防护状态，为0表示防护处于关闭状态，为1表示防护处于开启状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * 防护临时关闭的过期时间，当防护状态为开启时此字段为空；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_undefendExpire;
                    bool m_undefendExpireHasBeenSet;

                    /**
                     * 控制台功能展示字段，为1表示控制台功能展示，为0表示控制台功能隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_showFlag;
                    bool m_showFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSDEFENDSTATUSRESPONSE_H_
