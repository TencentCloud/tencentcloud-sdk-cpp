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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYENTERPRISEFOURFACTORSRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYENTERPRISEFOURFACTORSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Detail.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VerifyEnterpriseFourFactors返回参数结构体
                */
                class VerifyEnterpriseFourFactorsResponse : public AbstractModel
                {
                public:
                    VerifyEnterpriseFourFactorsResponse();
                    ~VerifyEnterpriseFourFactorsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取核验一致性（1:一致，2:不一致）
                     * @return State 核验一致性（1:一致，2:不一致）
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取返回不一致时，返回明细，-22：姓名不一致，-23：证件号码不一致，-24：企业名称不一致，-25：企业标识不一致
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Detail 返回不一致时，返回明细，-22：姓名不一致，-23：证件号码不一致，-24：企业名称不一致，-25：企业标识不一致
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Detail GetDetail() const;

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                private:

                    /**
                     * 核验一致性（1:一致，2:不一致）
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 返回不一致时，返回明细，-22：姓名不一致，-23：证件号码不一致，-24：企业名称不一致，-25：企业标识不一致
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Detail m_detail;
                    bool m_detailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VERIFYENTERPRISEFOURFACTORSRESPONSE_H_
