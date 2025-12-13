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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_CONFIGUREBACKUPPLANREQUEST_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_CONFIGUREBACKUPPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/BackupEndpoint.h>
#include <tencentcloud/dbs/v20211108/model/BackupObject.h>
#include <tencentcloud/dbs/v20211108/model/BackupStrategy.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * ConfigureBackupPlan请求参数结构体
                */
                class ConfigureBackupPlanRequest : public AbstractModel
                {
                public:
                    ConfigureBackupPlanRequest();
                    ~ConfigureBackupPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份计划 ID。
                     * @return BackupPlanId 备份计划 ID。
                     * 
                     */
                    std::string GetBackupPlanId() const;

                    /**
                     * 设置备份计划 ID。
                     * @param _backupPlanId 备份计划 ID。
                     * 
                     */
                    void SetBackupPlanId(const std::string& _backupPlanId);

                    /**
                     * 判断参数 BackupPlanId 是否已赋值
                     * @return BackupPlanId 是否已赋值
                     * 
                     */
                    bool BackupPlanIdHasBeenSet() const;

                    /**
                     * 获取备份计划名称。支持数字、英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@,且长度不能超过60。
                     * @return BackupPlanName 备份计划名称。支持数字、英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@,且长度不能超过60。
                     * 
                     */
                    std::string GetBackupPlanName() const;

                    /**
                     * 设置备份计划名称。支持数字、英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@,且长度不能超过60。
                     * @param _backupPlanName 备份计划名称。支持数字、英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@,且长度不能超过60。
                     * 
                     */
                    void SetBackupPlanName(const std::string& _backupPlanName);

                    /**
                     * 判断参数 BackupPlanName 是否已赋值
                     * @return BackupPlanName 是否已赋值
                     * 
                     */
                    bool BackupPlanNameHasBeenSet() const;

                    /**
                     * 获取备份源实例信息。
                     * @return SourceEndPoint 备份源实例信息。
                     * 
                     */
                    BackupEndpoint GetSourceEndPoint() const;

                    /**
                     * 设置备份源实例信息。
                     * @param _sourceEndPoint 备份源实例信息。
                     * 
                     */
                    void SetSourceEndPoint(const BackupEndpoint& _sourceEndPoint);

                    /**
                     * 判断参数 SourceEndPoint 是否已赋值
                     * @return SourceEndPoint 是否已赋值
                     * 
                     */
                    bool SourceEndPointHasBeenSet() const;

                    /**
                     * 获取备份对象信息。
                     * @return BackupObject 备份对象信息。
                     * 
                     */
                    BackupObject GetBackupObject() const;

                    /**
                     * 设置备份对象信息。
                     * @param _backupObject 备份对象信息。
                     * 
                     */
                    void SetBackupObject(const BackupObject& _backupObject);

                    /**
                     * 判断参数 BackupObject 是否已赋值
                     * @return BackupObject 是否已赋值
                     * 
                     */
                    bool BackupObjectHasBeenSet() const;

                    /**
                     * 获取备份策略。
                     * @return BackupStrategy 备份策略。
                     * 
                     */
                    BackupStrategy GetBackupStrategy() const;

                    /**
                     * 设置备份策略。
                     * @param _backupStrategy 备份策略。
                     * 
                     */
                    void SetBackupStrategy(const BackupStrategy& _backupStrategy);

                    /**
                     * 判断参数 BackupStrategy 是否已赋值
                     * @return BackupStrategy 是否已赋值
                     * 
                     */
                    bool BackupStrategyHasBeenSet() const;

                    /**
                     * 获取加密信息。当需要使用SSE-KMS需要传入该值，你可以通过 KMS 的 GenerateDataKey 接口生成。
                     * @return PlainText 加密信息。当需要使用SSE-KMS需要传入该值，你可以通过 KMS 的 GenerateDataKey 接口生成。
                     * 
                     */
                    std::string GetPlainText() const;

                    /**
                     * 设置加密信息。当需要使用SSE-KMS需要传入该值，你可以通过 KMS 的 GenerateDataKey 接口生成。
                     * @param _plainText 加密信息。当需要使用SSE-KMS需要传入该值，你可以通过 KMS 的 GenerateDataKey 接口生成。
                     * 
                     */
                    void SetPlainText(const std::string& _plainText);

                    /**
                     * 判断参数 PlainText 是否已赋值
                     * @return PlainText 是否已赋值
                     * 
                     */
                    bool PlainTextHasBeenSet() const;

                private:

                    /**
                     * 备份计划 ID。
                     */
                    std::string m_backupPlanId;
                    bool m_backupPlanIdHasBeenSet;

                    /**
                     * 备份计划名称。支持数字、英文大小写字母、中文以及特殊字符_-./()（）[]+=：:@,且长度不能超过60。
                     */
                    std::string m_backupPlanName;
                    bool m_backupPlanNameHasBeenSet;

                    /**
                     * 备份源实例信息。
                     */
                    BackupEndpoint m_sourceEndPoint;
                    bool m_sourceEndPointHasBeenSet;

                    /**
                     * 备份对象信息。
                     */
                    BackupObject m_backupObject;
                    bool m_backupObjectHasBeenSet;

                    /**
                     * 备份策略。
                     */
                    BackupStrategy m_backupStrategy;
                    bool m_backupStrategyHasBeenSet;

                    /**
                     * 加密信息。当需要使用SSE-KMS需要传入该值，你可以通过 KMS 的 GenerateDataKey 接口生成。
                     */
                    std::string m_plainText;
                    bool m_plainTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_CONFIGUREBACKUPPLANREQUEST_H_
