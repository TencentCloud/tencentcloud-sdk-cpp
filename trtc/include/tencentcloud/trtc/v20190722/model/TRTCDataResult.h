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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCDATARESULT_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCDATARESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SeriesInfos.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * TRTC数据大盘/实时监控 API接口数据出参
                */
                class TRTCDataResult : public AbstractModel
                {
                public:
                    TRTCDataResult();
                    ~TRTCDataResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取StatementID值，监控仪表盘下固定为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatementID StatementID值，监控仪表盘下固定为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatementID() const;

                    /**
                     * 设置StatementID值，监控仪表盘下固定为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statementID StatementID值，监控仪表盘下固定为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatementID(const int64_t& _statementID);

                    /**
                     * 判断参数 StatementID 是否已赋值
                     * @return StatementID 是否已赋值
                     * 
                     */
                    bool StatementIDHasBeenSet() const;

                    /**
                     * 获取查询结果数据，以Columns-Values形式返回。	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Series 查询结果数据，以Columns-Values形式返回。	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SeriesInfos> GetSeries() const;

                    /**
                     * 设置查询结果数据，以Columns-Values形式返回。	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _series 查询结果数据，以Columns-Values形式返回。	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeries(const std::vector<SeriesInfos>& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                    /**
                     * 获取Total值，监控仪表盘功能下固定为1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total Total值，监控仪表盘功能下固定为1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置Total值，监控仪表盘功能下固定为1。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total Total值，监控仪表盘功能下固定为1。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * StatementID值，监控仪表盘下固定为0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_statementID;
                    bool m_statementIDHasBeenSet;

                    /**
                     * 查询结果数据，以Columns-Values形式返回。	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SeriesInfos> m_series;
                    bool m_seriesHasBeenSet;

                    /**
                     * Total值，监控仪表盘功能下固定为1。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TRTCDATARESULT_H_
