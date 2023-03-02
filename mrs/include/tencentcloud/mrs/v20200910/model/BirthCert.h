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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_BIRTHCERT_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_BIRTHCERT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/NeonatalInfo.h>
#include <tencentcloud/mrs/v20200910/model/ParentInfo.h>
#include <tencentcloud/mrs/v20200910/model/IssueInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 出生证明结构化信息
                */
                class BirthCert : public AbstractModel
                {
                public:
                    BirthCert();
                    ~BirthCert() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取新生儿信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NeonatalInfo 新生儿信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NeonatalInfo GetNeonatalInfo() const;

                    /**
                     * 设置新生儿信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NeonatalInfo 新生儿信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNeonatalInfo(const NeonatalInfo& _neonatalInfo);

                    /**
                     * 判断参数 NeonatalInfo 是否已赋值
                     * @return NeonatalInfo 是否已赋值
                     */
                    bool NeonatalInfoHasBeenSet() const;

                    /**
                     * 获取母亲信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MotherInfo 母亲信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ParentInfo GetMotherInfo() const;

                    /**
                     * 设置母亲信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MotherInfo 母亲信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMotherInfo(const ParentInfo& _motherInfo);

                    /**
                     * 判断参数 MotherInfo 是否已赋值
                     * @return MotherInfo 是否已赋值
                     */
                    bool MotherInfoHasBeenSet() const;

                    /**
                     * 获取父亲信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FatherInfo 父亲信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ParentInfo GetFatherInfo() const;

                    /**
                     * 设置父亲信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FatherInfo 父亲信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFatherInfo(const ParentInfo& _fatherInfo);

                    /**
                     * 判断参数 FatherInfo 是否已赋值
                     * @return FatherInfo 是否已赋值
                     */
                    bool FatherInfoHasBeenSet() const;

                    /**
                     * 获取签发信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IssueInfo 签发信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IssueInfo GetIssueInfo() const;

                    /**
                     * 设置签发信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IssueInfo 签发信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIssueInfo(const IssueInfo& _issueInfo);

                    /**
                     * 判断参数 IssueInfo 是否已赋值
                     * @return IssueInfo 是否已赋值
                     */
                    bool IssueInfoHasBeenSet() const;

                private:

                    /**
                     * 新生儿信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NeonatalInfo m_neonatalInfo;
                    bool m_neonatalInfoHasBeenSet;

                    /**
                     * 母亲信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ParentInfo m_motherInfo;
                    bool m_motherInfoHasBeenSet;

                    /**
                     * 父亲信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ParentInfo m_fatherInfo;
                    bool m_fatherInfoHasBeenSet;

                    /**
                     * 签发信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IssueInfo m_issueInfo;
                    bool m_issueInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_BIRTHCERT_H_
