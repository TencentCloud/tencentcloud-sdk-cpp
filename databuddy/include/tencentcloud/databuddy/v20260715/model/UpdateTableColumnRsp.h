/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATETABLECOLUMNRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATETABLECOLUMNRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ColumnErrorMessages.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 修改表字段描述响应
                */
                class UpdateTableColumnRsp : public AbstractModel
                {
                public:
                    UpdateTableColumnRsp();
                    ~UpdateTableColumnRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取整体结果，true表示全部成功
                     * @return Result 整体结果，true表示全部成功
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置整体结果，true表示全部成功
                     * @param _result 整体结果，true表示全部成功
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取失败的字段列表（部分成功场景），全部成功时为空
                     * @return FailedColumns 失败的字段列表（部分成功场景），全部成功时为空
                     * 
                     */
                    std::vector<ColumnErrorMessages> GetFailedColumns() const;

                    /**
                     * 设置失败的字段列表（部分成功场景），全部成功时为空
                     * @param _failedColumns 失败的字段列表（部分成功场景），全部成功时为空
                     * 
                     */
                    void SetFailedColumns(const std::vector<ColumnErrorMessages>& _failedColumns);

                    /**
                     * 判断参数 FailedColumns 是否已赋值
                     * @return FailedColumns 是否已赋值
                     * 
                     */
                    bool FailedColumnsHasBeenSet() const;

                private:

                    /**
                     * 整体结果，true表示全部成功
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 失败的字段列表（部分成功场景），全部成功时为空
                     */
                    std::vector<ColumnErrorMessages> m_failedColumns;
                    bool m_failedColumnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATETABLECOLUMNRSP_H_
