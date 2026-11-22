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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGDIAGNOSISRULES_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGDIAGNOSISRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * LogDiagnosisRules
                */
                class LogDiagnosisRules : public AbstractModel
                {
                public:
                    LogDiagnosisRules();
                    ~LogDiagnosisRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>errorCode</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorCode <p>errorCode</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置<p>errorCode</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorCode <p>errorCode</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>createTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>createTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>createTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>createTime</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>lastUpdate</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdate <p>lastUpdate</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastUpdate() const;

                    /**
                     * 设置<p>lastUpdate</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastUpdate <p>lastUpdate</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastUpdate(const std::string& _lastUpdate);

                    /**
                     * 判断参数 LastUpdate 是否已赋值
                     * @return LastUpdate 是否已赋值
                     * 
                     */
                    bool LastUpdateHasBeenSet() const;

                    /**
                     * 获取<p>owner</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner <p>owner</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置<p>owner</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner <p>owner</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取<p>异常概要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorTitle <p>异常概要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorTitle() const;

                    /**
                     * 设置<p>异常概要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorTitle <p>异常概要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorTitle(const std::string& _errorTitle);

                    /**
                     * 判断参数 ErrorTitle 是否已赋值
                     * @return ErrorTitle 是否已赋值
                     * 
                     */
                    bool ErrorTitleHasBeenSet() const;

                    /**
                     * 获取<p>异常关键字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage <p>异常关键字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置<p>异常关键字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorMessage <p>异常关键字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>异常原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorReason <p>异常原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorReason() const;

                    /**
                     * 设置<p>异常原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorReason <p>异常原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorReason(const std::string& _errorReason);

                    /**
                     * 判断参数 ErrorReason 是否已赋值
                     * @return ErrorReason 是否已赋值
                     * 
                     */
                    bool ErrorReasonHasBeenSet() const;

                    /**
                     * 获取<p>解决办法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorSolution <p>解决办法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorSolution() const;

                    /**
                     * 设置<p>解决办法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorSolution <p>解决办法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorSolution(const std::string& _errorSolution);

                    /**
                     * 判断参数 ErrorSolution 是否已赋值
                     * @return ErrorSolution 是否已赋值
                     * 
                     */
                    bool ErrorSolutionHasBeenSet() const;

                    /**
                     * 获取<p>展示顺序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorOrder <p>展示顺序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorOrder() const;

                    /**
                     * 设置<p>展示顺序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorOrder <p>展示顺序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorOrder(const std::string& _errorOrder);

                    /**
                     * 判断参数 ErrorOrder 是否已赋值
                     * @return ErrorOrder 是否已赋值
                     * 
                     */
                    bool ErrorOrderHasBeenSet() const;

                    /**
                     * 获取<p>例子</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorExample <p>例子</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorExample() const;

                    /**
                     * 设置<p>例子</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorExample <p>例子</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorExample(const std::string& _errorExample);

                    /**
                     * 判断参数 ErrorExample 是否已赋值
                     * @return ErrorExample 是否已赋值
                     * 
                     */
                    bool ErrorExampleHasBeenSet() const;

                    /**
                     * 获取<p>扩展说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtToolsUrl <p>扩展说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtToolsUrl() const;

                    /**
                     * 设置<p>扩展说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extToolsUrl <p>扩展说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtToolsUrl(const std::string& _extToolsUrl);

                    /**
                     * 判断参数 ExtToolsUrl 是否已赋值
                     * @return ExtToolsUrl 是否已赋值
                     * 
                     */
                    bool ExtToolsUrlHasBeenSet() const;

                    /**
                     * 获取<p>异常级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorLevel <p>异常级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorLevel() const;

                    /**
                     * 设置<p>异常级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorLevel <p>异常级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorLevel(const std::string& _errorLevel);

                    /**
                     * 判断参数 ErrorLevel 是否已赋值
                     * @return ErrorLevel 是否已赋值
                     * 
                     */
                    bool ErrorLevelHasBeenSet() const;

                    /**
                     * 获取<p>异常类型：用户/系统</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorTypeAggregation <p>异常类型：用户/系统</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorTypeAggregation() const;

                    /**
                     * 设置<p>异常类型：用户/系统</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorTypeAggregation <p>异常类型：用户/系统</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorTypeAggregation(const std::string& _errorTypeAggregation);

                    /**
                     * 判断参数 ErrorTypeAggregation 是否已赋值
                     * @return ErrorTypeAggregation 是否已赋值
                     * 
                     */
                    bool ErrorTypeAggregationHasBeenSet() const;

                    /**
                     * 获取<p>异常系统类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorSystem <p>异常系统类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorSystem() const;

                    /**
                     * 设置<p>异常系统类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorSystem <p>异常系统类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorSystem(const std::string& _errorSystem);

                    /**
                     * 判断参数 ErrorSystem 是否已赋值
                     * @return ErrorSystem 是否已赋值
                     * 
                     */
                    bool ErrorSystemHasBeenSet() const;

                    /**
                     * 获取<p>异常日志来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorLogSystem <p>异常日志来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorLogSystem() const;

                    /**
                     * 设置<p>异常日志来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorLogSystem <p>异常日志来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorLogSystem(const std::string& _errorLogSystem);

                    /**
                     * 判断参数 ErrorLogSystem 是否已赋值
                     * @return ErrorLogSystem 是否已赋值
                     * 
                     */
                    bool ErrorLogSystemHasBeenSet() const;

                private:

                    /**
                     * <p>id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>errorCode</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>createTime</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>lastUpdate</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastUpdate;
                    bool m_lastUpdateHasBeenSet;

                    /**
                     * <p>owner</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>异常概要</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorTitle;
                    bool m_errorTitleHasBeenSet;

                    /**
                     * <p>异常关键字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>异常原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorReason;
                    bool m_errorReasonHasBeenSet;

                    /**
                     * <p>解决办法</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorSolution;
                    bool m_errorSolutionHasBeenSet;

                    /**
                     * <p>展示顺序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorOrder;
                    bool m_errorOrderHasBeenSet;

                    /**
                     * <p>例子</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorExample;
                    bool m_errorExampleHasBeenSet;

                    /**
                     * <p>扩展说明</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extToolsUrl;
                    bool m_extToolsUrlHasBeenSet;

                    /**
                     * <p>异常级别</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorLevel;
                    bool m_errorLevelHasBeenSet;

                    /**
                     * <p>异常类型：用户/系统</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorTypeAggregation;
                    bool m_errorTypeAggregationHasBeenSet;

                    /**
                     * <p>异常系统类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorSystem;
                    bool m_errorSystemHasBeenSet;

                    /**
                     * <p>异常日志来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorLogSystem;
                    bool m_errorLogSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_LOGDIAGNOSISRULES_H_
