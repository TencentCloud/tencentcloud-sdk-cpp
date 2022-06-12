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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MEASURETRTCMCUEXTERNALRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MEASURETRTCMCUEXTERNALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/OneSdkAppIdTranscodeTimeUsagesNewInfo.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * MeasureTrtcMcuExternal返回参数结构体
                */
                class MeasureTrtcMcuExternalResponse : public AbstractModel
                {
                public:
                    MeasureTrtcMcuExternalResponse();
                    ~MeasureTrtcMcuExternalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用的用量信息数组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Usages 应用的用量信息数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OneSdkAppIdTranscodeTimeUsagesNewInfo> GetUsages() const;

                    /**
                     * 判断参数 Usages 是否已赋值
                     * @return Usages 是否已赋值
                     */
                    bool UsagesHasBeenSet() const;

                    /**
                     * 获取用户计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 用户计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 应用的用量信息数组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OneSdkAppIdTranscodeTimeUsagesNewInfo> m_usages;
                    bool m_usagesHasBeenSet;

                    /**
                     * 用户计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MEASURETRTCMCUEXTERNALRESPONSE_H_
