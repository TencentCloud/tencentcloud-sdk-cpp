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

#ifndef TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINESTEPTASKINFO_H_
#define TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINESTEPTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Controlcenter
    {
        namespace V20230110
        {
            namespace Model
            {
                /**
                * 基线项部署任务信息列表
                */
                class BaselineStepTaskInfo : public AbstractModel
                {
                public:
                    BaselineStepTaskInfo();
                    ~BaselineStepTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务唯一Id，只能包含英文字母、数字，是16个字符的随机字符串。
                     * @return TaskId 任务唯一Id，只能包含英文字母、数字，是16个字符的随机字符串。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务唯一Id，只能包含英文字母、数字，是16个字符的随机字符串。
                     * @param _taskId 任务唯一Id，只能包含英文字母、数字，是16个字符的随机字符串。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取基线功能项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * @return Identifier 基线功能项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * 
                     */
                    std::string GetIdentifier() const;

                    /**
                     * 设置基线功能项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * @param _identifier 基线功能项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     * 
                     */
                    void SetIdentifier(const std::string& _identifier);

                    /**
                     * 判断参数 Identifier 是否已赋值
                     * @return Identifier 是否已赋值
                     * 
                     */
                    bool IdentifierHasBeenSet() const;

                    /**
                     * 获取被应用基线项的成员账号uin
                     * @return MemberUin 被应用基线项的成员账号uin
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置被应用基线项的成员账号uin
                     * @param _memberUin 被应用基线项的成员账号uin
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取基线项应用的状态,Running表示基线项应用中,Success表示基线项应用成功,Failed表示基线项应用失败,Pending表示基线项待应用,Skipped表示基线项被跳过
                     * @return Status 基线项应用的状态,Running表示基线项应用中,Success表示基线项应用成功,Failed表示基线项应用失败,Pending表示基线项待应用,Skipped表示基线项被跳过
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置基线项应用的状态,Running表示基线项应用中,Success表示基线项应用成功,Failed表示基线项应用失败,Pending表示基线项待应用,Skipped表示基线项被跳过
                     * @param _status 基线项应用的状态,Running表示基线项应用中,Success表示基线项应用成功,Failed表示基线项应用失败,Pending表示基线项待应用,Skipped表示基线项被跳过
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误码
                     * @return ErrCode 错误码
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置错误码
                     * @param _errCode 错误码
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrMessage 错误信息
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 设置错误信息
                     * @param _errMessage 错误信息
                     * 
                     */
                    void SetErrMessage(const std::string& _errMessage);

                    /**
                     * 判断参数 ErrMessage 是否已赋值
                     * @return ErrMessage 是否已赋值
                     * 
                     */
                    bool ErrMessageHasBeenSet() const;

                    /**
                     * 获取基线项部署输出
                     * @return Output 基线项部署输出
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置基线项部署输出
                     * @param _output 基线项部署输出
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取创建时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * @return CreateTime 创建时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * @param _createTime 创建时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * @return UpdateTime 更新时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * @param _updateTime 更新时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 任务唯一Id，只能包含英文字母、数字，是16个字符的随机字符串。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 基线功能项唯一标识，只能包含英文字母、数字和@、,._[]-:()（）【】+=，。，长度2-128个字符。
                     */
                    std::string m_identifier;
                    bool m_identifierHasBeenSet;

                    /**
                     * 被应用基线项的成员账号uin
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 基线项应用的状态,Running表示基线项应用中,Success表示基线项应用成功,Failed表示基线项应用失败,Pending表示基线项待应用,Skipped表示基线项被跳过
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误码
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                    /**
                     * 基线项部署输出
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 创建时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，按照ISO8601标准表示，格式为yyyy-MM-dd hh:mm:ss。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONTROLCENTER_V20230110_MODEL_BASELINESTEPTASKINFO_H_
