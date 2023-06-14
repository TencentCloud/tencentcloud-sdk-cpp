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

#ifndef TENCENTCLOUD_YUNSOU_V20191115_MODEL_DATAMANIPULATIONRESULT_H_
#define TENCENTCLOUD_YUNSOU_V20191115_MODEL_DATAMANIPULATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunsou/v20191115/model/DataManipulationResultItem.h>


namespace TencentCloud
{
    namespace Yunsou
    {
        namespace V20191115
        {
            namespace Model
            {
                /**
                * 数据操作结果
                */
                class DataManipulationResult : public AbstractModel
                {
                public:
                    DataManipulationResult();
                    ~DataManipulationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param _appId 应用ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取序号
                     * @return Seq 序号
                     * 
                     */
                    int64_t GetSeq() const;

                    /**
                     * 设置序号
                     * @param _seq 序号
                     * 
                     */
                    void SetSeq(const int64_t& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return TotalResult 结果
                     * 
                     */
                    std::string GetTotalResult() const;

                    /**
                     * 设置结果
                     * @param _totalResult 结果
                     * 
                     */
                    void SetTotalResult(const std::string& _totalResult);

                    /**
                     * 判断参数 TotalResult 是否已赋值
                     * @return TotalResult 是否已赋值
                     * 
                     */
                    bool TotalResultHasBeenSet() const;

                    /**
                     * 获取操作结果明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 操作结果明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataManipulationResultItem> GetResult() const;

                    /**
                     * 设置操作结果明细
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 操作结果明细
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const std::vector<DataManipulationResultItem>& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorResult 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorResult() const;

                    /**
                     * 设置异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorResult 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorResult(const std::string& _errorResult);

                    /**
                     * 判断参数 ErrorResult 是否已赋值
                     * @return ErrorResult 是否已赋值
                     * 
                     */
                    bool ErrorResultHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 序号
                     */
                    int64_t m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 结果
                     */
                    std::string m_totalResult;
                    bool m_totalResultHasBeenSet;

                    /**
                     * 操作结果明细
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataManipulationResultItem> m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorResult;
                    bool m_errorResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNSOU_V20191115_MODEL_DATAMANIPULATIONRESULT_H_
