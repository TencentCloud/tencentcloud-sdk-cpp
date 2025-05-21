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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_FILESETINFO_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_FILESETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * Fileset信息
                */
                class FilesetInfo : public AbstractModel
                {
                public:
                    FilesetInfo();
                    ~FilesetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Fileset id
                     * @return FsetId Fileset id
                     * 
                     */
                    std::string GetFsetId() const;

                    /**
                     * 设置Fileset id
                     * @param _fsetId Fileset id
                     * 
                     */
                    void SetFsetId(const std::string& _fsetId);

                    /**
                     * 判断参数 FsetId 是否已赋值
                     * @return FsetId 是否已赋值
                     * 
                     */
                    bool FsetIdHasBeenSet() const;

                    /**
                     * 获取Fileset名称
                     * @return FsetName Fileset名称
                     * 
                     */
                    std::string GetFsetName() const;

                    /**
                     * 设置Fileset名称
                     * @param _fsetName Fileset名称
                     * 
                     */
                    void SetFsetName(const std::string& _fsetName);

                    /**
                     * 判断参数 FsetName 是否已赋值
                     * @return FsetName 是否已赋值
                     * 
                     */
                    bool FsetNameHasBeenSet() const;

                    /**
                     * 获取Fileset目录
                     * @return FsetDir Fileset目录
                     * 
                     */
                    std::string GetFsetDir() const;

                    /**
                     * 设置Fileset目录
                     * @param _fsetDir Fileset目录
                     * 
                     */
                    void SetFsetDir(const std::string& _fsetDir);

                    /**
                     * 判断参数 FsetDir 是否已赋值
                     * @return FsetDir 是否已赋值
                     * 
                     */
                    bool FsetDirHasBeenSet() const;

                    /**
                     * 获取Fileset容量配额限定值
                     * @return QuotaSizeLimit Fileset容量配额限定值
                     * 
                     */
                    std::string GetQuotaSizeLimit() const;

                    /**
                     * 设置Fileset容量配额限定值
                     * @param _quotaSizeLimit Fileset容量配额限定值
                     * 
                     */
                    void SetQuotaSizeLimit(const std::string& _quotaSizeLimit);

                    /**
                     * 判断参数 QuotaSizeLimit 是否已赋值
                     * @return QuotaSizeLimit 是否已赋值
                     * 
                     */
                    bool QuotaSizeLimitHasBeenSet() const;

                    /**
                     * 获取已使用容量配额
                     * @return QuotaSizeUsed 已使用容量配额
                     * 
                     */
                    std::string GetQuotaSizeUsed() const;

                    /**
                     * 设置已使用容量配额
                     * @param _quotaSizeUsed 已使用容量配额
                     * 
                     */
                    void SetQuotaSizeUsed(const std::string& _quotaSizeUsed);

                    /**
                     * 判断参数 QuotaSizeUsed 是否已赋值
                     * @return QuotaSizeUsed 是否已赋值
                     * 
                     */
                    bool QuotaSizeUsedHasBeenSet() const;

                    /**
                     * 获取容量配额使用占比
                     * @return QuotaSizeUsedPercent 容量配额使用占比
                     * 
                     */
                    std::string GetQuotaSizeUsedPercent() const;

                    /**
                     * 设置容量配额使用占比
                     * @param _quotaSizeUsedPercent 容量配额使用占比
                     * 
                     */
                    void SetQuotaSizeUsedPercent(const std::string& _quotaSizeUsedPercent);

                    /**
                     * 判断参数 QuotaSizeUsedPercent 是否已赋值
                     * @return QuotaSizeUsedPercent 是否已赋值
                     * 
                     */
                    bool QuotaSizeUsedPercentHasBeenSet() const;

                    /**
                     * 获取Fileset文件数配额限定值
                     * @return QuotaFilesLimit Fileset文件数配额限定值
                     * 
                     */
                    std::string GetQuotaFilesLimit() const;

                    /**
                     * 设置Fileset文件数配额限定值
                     * @param _quotaFilesLimit Fileset文件数配额限定值
                     * 
                     */
                    void SetQuotaFilesLimit(const std::string& _quotaFilesLimit);

                    /**
                     * 判断参数 QuotaFilesLimit 是否已赋值
                     * @return QuotaFilesLimit 是否已赋值
                     * 
                     */
                    bool QuotaFilesLimitHasBeenSet() const;

                    /**
                     * 获取已使用文件数配额
                     * @return QuotaFilesUsed 已使用文件数配额
                     * 
                     */
                    std::string GetQuotaFilesUsed() const;

                    /**
                     * 设置已使用文件数配额
                     * @param _quotaFilesUsed 已使用文件数配额
                     * 
                     */
                    void SetQuotaFilesUsed(const std::string& _quotaFilesUsed);

                    /**
                     * 判断参数 QuotaFilesUsed 是否已赋值
                     * @return QuotaFilesUsed 是否已赋值
                     * 
                     */
                    bool QuotaFilesUsedHasBeenSet() const;

                    /**
                     * 获取文件数配额使用占比
                     * @return QuotaFilesUsedPercent 文件数配额使用占比
                     * 
                     */
                    std::string GetQuotaFilesUsedPercent() const;

                    /**
                     * 设置文件数配额使用占比
                     * @param _quotaFilesUsedPercent 文件数配额使用占比
                     * 
                     */
                    void SetQuotaFilesUsedPercent(const std::string& _quotaFilesUsedPercent);

                    /**
                     * 判断参数 QuotaFilesUsedPercent 是否已赋值
                     * @return QuotaFilesUsedPercent 是否已赋值
                     * 
                     */
                    bool QuotaFilesUsedPercentHasBeenSet() const;

                    /**
                     * 获取Fileset审计
                     * @return AuditState Fileset审计
                     * 
                     */
                    std::string GetAuditState() const;

                    /**
                     * 设置Fileset审计
                     * @param _auditState Fileset审计
                     * 
                     */
                    void SetAuditState(const std::string& _auditState);

                    /**
                     * 判断参数 AuditState 是否已赋值
                     * @return AuditState 是否已赋值
                     * 
                     */
                    bool AuditStateHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Fileset状态：creating 配置中 active 已生效 modify 修改中
                     * @return Status Fileset状态：creating 配置中 active 已生效 modify 修改中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Fileset状态：creating 配置中 active 已生效 modify 修改中
                     * @param _status Fileset状态：creating 配置中 active 已生效 modify 修改中
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Fileset id
                     */
                    std::string m_fsetId;
                    bool m_fsetIdHasBeenSet;

                    /**
                     * Fileset名称
                     */
                    std::string m_fsetName;
                    bool m_fsetNameHasBeenSet;

                    /**
                     * Fileset目录
                     */
                    std::string m_fsetDir;
                    bool m_fsetDirHasBeenSet;

                    /**
                     * Fileset容量配额限定值
                     */
                    std::string m_quotaSizeLimit;
                    bool m_quotaSizeLimitHasBeenSet;

                    /**
                     * 已使用容量配额
                     */
                    std::string m_quotaSizeUsed;
                    bool m_quotaSizeUsedHasBeenSet;

                    /**
                     * 容量配额使用占比
                     */
                    std::string m_quotaSizeUsedPercent;
                    bool m_quotaSizeUsedPercentHasBeenSet;

                    /**
                     * Fileset文件数配额限定值
                     */
                    std::string m_quotaFilesLimit;
                    bool m_quotaFilesLimitHasBeenSet;

                    /**
                     * 已使用文件数配额
                     */
                    std::string m_quotaFilesUsed;
                    bool m_quotaFilesUsedHasBeenSet;

                    /**
                     * 文件数配额使用占比
                     */
                    std::string m_quotaFilesUsedPercent;
                    bool m_quotaFilesUsedPercentHasBeenSet;

                    /**
                     * Fileset审计
                     */
                    std::string m_auditState;
                    bool m_auditStateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Fileset状态：creating 配置中 active 已生效 modify 修改中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_FILESETINFO_H_
