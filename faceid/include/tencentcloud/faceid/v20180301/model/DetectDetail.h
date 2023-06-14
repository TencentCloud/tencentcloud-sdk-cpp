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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTDETAIL_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 活体一比一详情
                */
                class DetectDetail : public AbstractModel
                {
                public:
                    DetectDetail();
                    ~DetectDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReqTime 请求时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReqTime() const;

                    /**
                     * 设置请求时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reqTime 请求时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReqTime(const std::string& _reqTime);

                    /**
                     * 判断参数 ReqTime 是否已赋值
                     * @return ReqTime 是否已赋值
                     * 
                     */
                    bool ReqTimeHasBeenSet() const;

                    /**
                     * 获取本次活体一比一请求的唯一标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seq 本次活体一比一请求的唯一标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeq() const;

                    /**
                     * 设置本次活体一比一请求的唯一标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seq 本次活体一比一请求的唯一标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeq(const std::string& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取参与本次活体一比一的身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Idcard 参与本次活体一比一的身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdcard() const;

                    /**
                     * 设置参与本次活体一比一的身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idcard 参与本次活体一比一的身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdcard(const std::string& _idcard);

                    /**
                     * 判断参数 Idcard 是否已赋值
                     * @return Idcard 是否已赋值
                     * 
                     */
                    bool IdcardHasBeenSet() const;

                    /**
                     * 获取参与本次活体一比一的姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 参与本次活体一比一的姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参与本次活体一比一的姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 参与本次活体一比一的姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取本次活体一比一的相似度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sim 本次活体一比一的相似度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSim() const;

                    /**
                     * 设置本次活体一比一的相似度。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sim 本次活体一比一的相似度。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSim(const std::string& _sim);

                    /**
                     * 判断参数 Sim 是否已赋值
                     * @return Sim 是否已赋值
                     * 
                     */
                    bool SimHasBeenSet() const;

                    /**
                     * 获取本次活体一比一是否收费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNeedCharge 本次活体一比一是否收费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsNeedCharge() const;

                    /**
                     * 设置本次活体一比一是否收费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isNeedCharge 本次活体一比一是否收费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsNeedCharge(const bool& _isNeedCharge);

                    /**
                     * 判断参数 IsNeedCharge 是否已赋值
                     * @return IsNeedCharge 是否已赋值
                     * 
                     */
                    bool IsNeedChargeHasBeenSet() const;

                    /**
                     * 获取本次活体一比一最终结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errcode 本次活体一比一最终结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrcode() const;

                    /**
                     * 设置本次活体一比一最终结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errcode 本次活体一比一最终结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrcode(const int64_t& _errcode);

                    /**
                     * 判断参数 Errcode 是否已赋值
                     * @return Errcode 是否已赋值
                     * 
                     */
                    bool ErrcodeHasBeenSet() const;

                    /**
                     * 获取本次活体一比一最终结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errmsg 本次活体一比一最终结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrmsg() const;

                    /**
                     * 设置本次活体一比一最终结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errmsg 本次活体一比一最终结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrmsg(const std::string& _errmsg);

                    /**
                     * 判断参数 Errmsg 是否已赋值
                     * @return Errmsg 是否已赋值
                     * 
                     */
                    bool ErrmsgHasBeenSet() const;

                    /**
                     * 获取本次活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Livestatus 本次活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLivestatus() const;

                    /**
                     * 设置本次活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _livestatus 本次活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLivestatus(const int64_t& _livestatus);

                    /**
                     * 判断参数 Livestatus 是否已赋值
                     * @return Livestatus 是否已赋值
                     * 
                     */
                    bool LivestatusHasBeenSet() const;

                    /**
                     * 获取本次活体结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Livemsg 本次活体结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLivemsg() const;

                    /**
                     * 设置本次活体结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _livemsg 本次活体结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLivemsg(const std::string& _livemsg);

                    /**
                     * 判断参数 Livemsg 是否已赋值
                     * @return Livemsg 是否已赋值
                     * 
                     */
                    bool LivemsgHasBeenSet() const;

                    /**
                     * 获取本次一比一结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comparestatus 本次一比一结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetComparestatus() const;

                    /**
                     * 设置本次一比一结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comparestatus 本次一比一结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComparestatus(const int64_t& _comparestatus);

                    /**
                     * 判断参数 Comparestatus 是否已赋值
                     * @return Comparestatus 是否已赋值
                     * 
                     */
                    bool ComparestatusHasBeenSet() const;

                    /**
                     * 获取本次一比一结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comparemsg 本次一比一结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComparemsg() const;

                    /**
                     * 设置本次一比一结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comparemsg 本次一比一结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComparemsg(const std::string& _comparemsg);

                    /**
                     * 判断参数 Comparemsg 是否已赋值
                     * @return Comparemsg 是否已赋值
                     * 
                     */
                    bool ComparemsgHasBeenSet() const;

                    /**
                     * 获取比对库源类型。包括：
公安商业库；
业务方自有库（用户上传照片、客户的混合库、混合部署库）；
二次验证库；
人工审核库；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompareLibType 比对库源类型。包括：
公安商业库；
业务方自有库（用户上传照片、客户的混合库、混合部署库）；
二次验证库；
人工审核库；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCompareLibType() const;

                    /**
                     * 设置比对库源类型。包括：
公安商业库；
业务方自有库（用户上传照片、客户的混合库、混合部署库）；
二次验证库；
人工审核库；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _compareLibType 比对库源类型。包括：
公安商业库；
业务方自有库（用户上传照片、客户的混合库、混合部署库）；
二次验证库；
人工审核库；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompareLibType(const std::string& _compareLibType);

                    /**
                     * 判断参数 CompareLibType 是否已赋值
                     * @return CompareLibType 是否已赋值
                     * 
                     */
                    bool CompareLibTypeHasBeenSet() const;

                    /**
                     * 获取枚举活体检测类型：
0：未知
1：数字活体
2：动作活体
3：静默活体
4：一闪活体（动作+光线）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivenessMode 枚举活体检测类型：
0：未知
1：数字活体
2：动作活体
3：静默活体
4：一闪活体（动作+光线）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLivenessMode() const;

                    /**
                     * 设置枚举活体检测类型：
0：未知
1：数字活体
2：动作活体
3：静默活体
4：一闪活体（动作+光线）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _livenessMode 枚举活体检测类型：
0：未知
1：数字活体
2：动作活体
3：静默活体
4：一闪活体（动作+光线）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLivenessMode(const uint64_t& _livenessMode);

                    /**
                     * 判断参数 LivenessMode 是否已赋值
                     * @return LivenessMode 是否已赋值
                     * 
                     */
                    bool LivenessModeHasBeenSet() const;

                private:

                    /**
                     * 请求时间戳。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reqTime;
                    bool m_reqTimeHasBeenSet;

                    /**
                     * 本次活体一比一请求的唯一标记。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 参与本次活体一比一的身份证号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idcard;
                    bool m_idcardHasBeenSet;

                    /**
                     * 参与本次活体一比一的姓名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 本次活体一比一的相似度。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sim;
                    bool m_simHasBeenSet;

                    /**
                     * 本次活体一比一是否收费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isNeedCharge;
                    bool m_isNeedChargeHasBeenSet;

                    /**
                     * 本次活体一比一最终结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errcode;
                    bool m_errcodeHasBeenSet;

                    /**
                     * 本次活体一比一最终结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errmsg;
                    bool m_errmsgHasBeenSet;

                    /**
                     * 本次活体结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_livestatus;
                    bool m_livestatusHasBeenSet;

                    /**
                     * 本次活体结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_livemsg;
                    bool m_livemsgHasBeenSet;

                    /**
                     * 本次一比一结果。0为成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_comparestatus;
                    bool m_comparestatusHasBeenSet;

                    /**
                     * 本次一比一结果描述。（仅描述用，文案更新时不会通知。）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comparemsg;
                    bool m_comparemsgHasBeenSet;

                    /**
                     * 比对库源类型。包括：
公安商业库；
业务方自有库（用户上传照片、客户的混合库、混合部署库）；
二次验证库；
人工审核库；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_compareLibType;
                    bool m_compareLibTypeHasBeenSet;

                    /**
                     * 枚举活体检测类型：
0：未知
1：数字活体
2：动作活体
3：静默活体
4：一闪活体（动作+光线）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_livenessMode;
                    bool m_livenessModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTDETAIL_H_
