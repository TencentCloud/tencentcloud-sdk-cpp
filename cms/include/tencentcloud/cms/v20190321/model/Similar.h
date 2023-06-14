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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_SIMILAR_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_SIMILAR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 相似度详情
                */
                class Similar : public AbstractModel
                {
                public:
                    Similar();
                    ~Similar() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
                     * @return EvilType 恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
                     * 
                     */
                    int64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
                     * @param _evilType 恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
                     * 
                     */
                    void SetEvilType(const int64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     * 
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取处置判定 0：未匹配到 1：恶意 2：白样本
                     * @return HitFlag 处置判定 0：未匹配到 1：恶意 2：白样本
                     * 
                     */
                    int64_t GetHitFlag() const;

                    /**
                     * 设置处置判定 0：未匹配到 1：恶意 2：白样本
                     * @param _hitFlag 处置判定 0：未匹配到 1：恶意 2：白样本
                     * 
                     */
                    void SetHitFlag(const int64_t& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取返回的种子url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SeedUrl 返回的种子url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeedUrl() const;

                    /**
                     * 设置返回的种子url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seedUrl 返回的种子url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeedUrl(const std::string& _seedUrl);

                    /**
                     * 判断参数 SeedUrl 是否已赋值
                     * @return SeedUrl 是否已赋值
                     * 
                     */
                    bool SeedUrlHasBeenSet() const;

                private:

                    /**
                     * 恶意类型
100：正常 
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂 
24001：暴恐
                     */
                    int64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 处置判定 0：未匹配到 1：恶意 2：白样本
                     */
                    int64_t m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 返回的种子url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seedUrl;
                    bool m_seedUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_SIMILAR_H_
