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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CPTISSUERANK_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CPTISSUERANK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 模板颁发量排名
                */
                class CptIssueRank : public AbstractModel
                {
                public:
                    CptIssueRank();
                    ~CptIssueRank() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板名称
                     * @return CptName 模板名称
                     * 
                     */
                    std::string GetCptName() const;

                    /**
                     * 设置模板名称
                     * @param _cptName 模板名称
                     * 
                     */
                    void SetCptName(const std::string& _cptName);

                    /**
                     * 判断参数 CptName 是否已赋值
                     * @return CptName 是否已赋值
                     * 
                     */
                    bool CptNameHasBeenSet() const;

                    /**
                     * 获取名次
                     * @return Rank 名次
                     * 
                     */
                    int64_t GetRank() const;

                    /**
                     * 设置名次
                     * @param _rank 名次
                     * 
                     */
                    void SetRank(const int64_t& _rank);

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     * 
                     */
                    bool RankHasBeenSet() const;

                    /**
                     * 获取颁发量
                     * @return Count 颁发量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置颁发量
                     * @param _count 颁发量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return ApplyName 应用名称
                     * 
                     */
                    std::string GetApplyName() const;

                    /**
                     * 设置应用名称
                     * @param _applyName 应用名称
                     * 
                     */
                    void SetApplyName(const std::string& _applyName);

                    /**
                     * 判断参数 ApplyName 是否已赋值
                     * @return ApplyName 是否已赋值
                     * 
                     */
                    bool ApplyNameHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return ApplyId 应用ID
                     * 
                     */
                    uint64_t GetApplyId() const;

                    /**
                     * 设置应用ID
                     * @param _applyId 应用ID
                     * 
                     */
                    void SetApplyId(const uint64_t& _applyId);

                    /**
                     * 判断参数 ApplyId 是否已赋值
                     * @return ApplyId 是否已赋值
                     * 
                     */
                    bool ApplyIdHasBeenSet() const;

                private:

                    /**
                     * 模板名称
                     */
                    std::string m_cptName;
                    bool m_cptNameHasBeenSet;

                    /**
                     * 名次
                     */
                    int64_t m_rank;
                    bool m_rankHasBeenSet;

                    /**
                     * 颁发量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_applyName;
                    bool m_applyNameHasBeenSet;

                    /**
                     * 应用ID
                     */
                    uint64_t m_applyId;
                    bool m_applyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CPTISSUERANK_H_
