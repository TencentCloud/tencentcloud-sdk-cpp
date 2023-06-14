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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SUBTASKDETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SUBTASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 实例操作记录流程任务中的子任务信息（如升级检查任务中的各个检查项）
                */
                class SubTaskDetail : public AbstractModel
                {
                public:
                    SubTaskDetail();
                    ~SubTaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子任务名
                     * @return Name 子任务名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置子任务名
                     * @param _name 子任务名
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
                     * 获取子任务结果
                     * @return Result 子任务结果
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置子任务结果
                     * @param _result 子任务结果
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
                     * 获取子任务错误信息
                     * @return ErrMsg 子任务错误信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置子任务错误信息
                     * @param _errMsg 子任务错误信息
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取子任务类型
                     * @return Type 子任务类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置子任务类型
                     * @param _type 子任务类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取子任务状态，0处理中 1成功 -1失败
                     * @return Status 子任务状态，0处理中 1成功 -1失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置子任务状态，0处理中 1成功 -1失败
                     * @param _status 子任务状态，0处理中 1成功 -1失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取升级检查失败的索引名
                     * @return FailedIndices 升级检查失败的索引名
                     * 
                     */
                    std::vector<std::string> GetFailedIndices() const;

                    /**
                     * 设置升级检查失败的索引名
                     * @param _failedIndices 升级检查失败的索引名
                     * 
                     */
                    void SetFailedIndices(const std::vector<std::string>& _failedIndices);

                    /**
                     * 判断参数 FailedIndices 是否已赋值
                     * @return FailedIndices 是否已赋值
                     * 
                     */
                    bool FailedIndicesHasBeenSet() const;

                    /**
                     * 获取子任务结束时间
                     * @return FinishTime 子任务结束时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置子任务结束时间
                     * @param _finishTime 子任务结束时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取子任务等级，1警告 2失败
                     * @return Level 子任务等级，1警告 2失败
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置子任务等级，1警告 2失败
                     * @param _level 子任务等级，1警告 2失败
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                private:

                    /**
                     * 子任务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 子任务结果
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 子任务错误信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 子任务类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 子任务状态，0处理中 1成功 -1失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 升级检查失败的索引名
                     */
                    std::vector<std::string> m_failedIndices;
                    bool m_failedIndicesHasBeenSet;

                    /**
                     * 子任务结束时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 子任务等级，1警告 2失败
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SUBTASKDETAIL_H_
