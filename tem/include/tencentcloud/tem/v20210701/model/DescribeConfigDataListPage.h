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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBECONFIGDATALISTPAGE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBECONFIGDATALISTPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/ConfigData.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 配置信息的分页列表
                */
                class DescribeConfigDataListPage : public AbstractModel
                {
                public:
                    DescribeConfigDataListPage();
                    ~DescribeConfigDataListPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录
                     * @return Records 记录
                     * 
                     */
                    std::vector<ConfigData> GetRecords() const;

                    /**
                     * 设置记录
                     * @param _records 记录
                     * 
                     */
                    void SetRecords(const std::vector<ConfigData>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取分页游标，用以查询下一页
                     * @return ContinueToken 分页游标，用以查询下一页
                     * 
                     */
                    std::string GetContinueToken() const;

                    /**
                     * 设置分页游标，用以查询下一页
                     * @param _continueToken 分页游标，用以查询下一页
                     * 
                     */
                    void SetContinueToken(const std::string& _continueToken);

                    /**
                     * 判断参数 ContinueToken 是否已赋值
                     * @return ContinueToken 是否已赋值
                     * 
                     */
                    bool ContinueTokenHasBeenSet() const;

                    /**
                     * 获取剩余数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemainingCount 剩余数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRemainingCount() const;

                    /**
                     * 设置剩余数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remainingCount 剩余数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemainingCount(const int64_t& _remainingCount);

                    /**
                     * 判断参数 RemainingCount 是否已赋值
                     * @return RemainingCount 是否已赋值
                     * 
                     */
                    bool RemainingCountHasBeenSet() const;

                private:

                    /**
                     * 记录
                     */
                    std::vector<ConfigData> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * 分页游标，用以查询下一页
                     */
                    std::string m_continueToken;
                    bool m_continueTokenHasBeenSet;

                    /**
                     * 剩余数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_remainingCount;
                    bool m_remainingCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBECONFIGDATALISTPAGE_H_
