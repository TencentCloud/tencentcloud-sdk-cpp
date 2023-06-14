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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PRODUCTTASKINFO_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PRODUCTTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * 产品级任务详细信息
                */
                class ProductTaskInfo : public AbstractModel
                {
                public:
                    ProductTaskInfo();
                    ~ProductTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return Id 任务ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置任务ID
                     * @param _id 任务ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务类型 0-批量创建设备类型
                     * @return Type 任务类型 0-批量创建设备类型
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置任务类型 0-批量创建设备类型
                     * @param _type 任务类型 0-批量创建设备类型
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取任务状态 0-创建中 1-待执行 2-执行中 3-执行失败 4-子任务部分失败 5-执行成功
                     * @return State 任务状态 0-创建中 1-待执行 2-执行中 3-执行失败 4-子任务部分失败 5-执行成功
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置任务状态 0-创建中 1-待执行 2-执行中 3-执行失败 4-子任务部分失败 5-执行成功
                     * @param _state 任务状态 0-创建中 1-待执行 2-执行中 3-执行失败 4-子任务部分失败 5-执行成功
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取任务参数类型 cosfile-文件输入 random-随机生成
                     * @return ParametersType 任务参数类型 cosfile-文件输入 random-随机生成
                     * 
                     */
                    std::string GetParametersType() const;

                    /**
                     * 设置任务参数类型 cosfile-文件输入 random-随机生成
                     * @param _parametersType 任务参数类型 cosfile-文件输入 random-随机生成
                     * 
                     */
                    void SetParametersType(const std::string& _parametersType);

                    /**
                     * 判断参数 ParametersType 是否已赋值
                     * @return ParametersType 是否已赋值
                     * 
                     */
                    bool ParametersTypeHasBeenSet() const;

                    /**
                     * 获取任务参数
                     * @return Parameters 任务参数
                     * 
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置任务参数
                     * @param _parameters 任务参数
                     * 
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     * 
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取任务执行结果类型 cosfile-文件输出 errmsg-错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultType 任务执行结果类型 cosfile-文件输出 errmsg-错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResultType() const;

                    /**
                     * 设置任务执行结果类型 cosfile-文件输出 errmsg-错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultType 任务执行结果类型 cosfile-文件输出 errmsg-错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultType(const std::string& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取任务执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 任务执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置任务执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 任务执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取子任务总个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchCount 子任务总个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBatchCount() const;

                    /**
                     * 设置子任务总个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchCount 子任务总个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchCount(const uint64_t& _batchCount);

                    /**
                     * 判断参数 BatchCount 是否已赋值
                     * @return BatchCount 是否已赋值
                     * 
                     */
                    bool BatchCountHasBeenSet() const;

                    /**
                     * 获取子任务已执行个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchOffset 子任务已执行个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBatchOffset() const;

                    /**
                     * 设置子任务已执行个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _batchOffset 子任务已执行个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBatchOffset(const uint64_t& _batchOffset);

                    /**
                     * 判断参数 BatchOffset 是否已赋值
                     * @return BatchOffset 是否已赋值
                     * 
                     */
                    bool BatchOffsetHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务更新时间
                     * @return UpdateTime 任务更新时间
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置任务更新时间
                     * @param _updateTime 任务更新时间
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CompleteTime 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCompleteTime() const;

                    /**
                     * 设置任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _completeTime 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCompleteTime(const uint64_t& _completeTime);

                    /**
                     * 判断参数 CompleteTime 是否已赋值
                     * @return CompleteTime 是否已赋值
                     * 
                     */
                    bool CompleteTimeHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务类型 0-批量创建设备类型
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 任务状态 0-创建中 1-待执行 2-执行中 3-执行失败 4-子任务部分失败 5-执行成功
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 任务参数类型 cosfile-文件输入 random-随机生成
                     */
                    std::string m_parametersType;
                    bool m_parametersTypeHasBeenSet;

                    /**
                     * 任务参数
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 任务执行结果类型 cosfile-文件输出 errmsg-错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * 任务执行结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 子任务总个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_batchCount;
                    bool m_batchCountHasBeenSet;

                    /**
                     * 子任务已执行个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_batchOffset;
                    bool m_batchOffsetHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务更新时间
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 任务完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_completeTime;
                    bool m_completeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_PRODUCTTASKINFO_H_
