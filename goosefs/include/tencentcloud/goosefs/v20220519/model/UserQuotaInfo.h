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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_USERQUOTAINFO_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_USERQUOTAINFO_H_

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
                * 用户配额信息
                */
                class UserQuotaInfo : public AbstractModel
                {
                public:
                    UserQuotaInfo();
                    ~UserQuotaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配额id
                     * @return QuotaId 配额id
                     * 
                     */
                    std::string GetQuotaId() const;

                    /**
                     * 设置配额id
                     * @param _quotaId 配额id
                     * 
                     */
                    void SetQuotaId(const std::string& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     * 
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取配额类型
                     * @return QuotaType 配额类型
                     * 
                     */
                    std::string GetQuotaType() const;

                    /**
                     * 设置配额类型
                     * @param _quotaType 配额类型
                     * 
                     */
                    void SetQuotaType(const std::string& _quotaType);

                    /**
                     * 判断参数 QuotaType 是否已赋值
                     * @return QuotaType 是否已赋值
                     * 
                     */
                    bool QuotaTypeHasBeenSet() const;

                    /**
                     * 获取配额对象名称，对应UID/GID的值
                     * @return QuotaObjectName 配额对象名称，对应UID/GID的值
                     * 
                     */
                    std::string GetQuotaObjectName() const;

                    /**
                     * 设置配额对象名称，对应UID/GID的值
                     * @param _quotaObjectName 配额对象名称，对应UID/GID的值
                     * 
                     */
                    void SetQuotaObjectName(const std::string& _quotaObjectName);

                    /**
                     * 判断参数 QuotaObjectName 是否已赋值
                     * @return QuotaObjectName 是否已赋值
                     * 
                     */
                    bool QuotaObjectNameHasBeenSet() const;

                    /**
                     * 获取容量配额限定值
                     * @return QuotaSizeLimit 容量配额限定值
                     * 
                     */
                    std::string GetQuotaSizeLimit() const;

                    /**
                     * 设置容量配额限定值
                     * @param _quotaSizeLimit 容量配额限定值
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
                     * 获取文件数配额限定值
                     * @return QuotaFilesLimit 文件数配额限定值
                     * 
                     */
                    std::string GetQuotaFilesLimit() const;

                    /**
                     * 设置文件数配额限定值
                     * @param _quotaFilesLimit 文件数配额限定值
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
                     * 获取配额状态：creating 配置中 active 已生效 modify 修改中
                     * @return Status 配额状态：creating 配置中 active 已生效 modify 修改中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置配额状态：creating 配置中 active 已生效 modify 修改中
                     * @param _status 配额状态：creating 配置中 active 已生效 modify 修改中
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
                     * 配额id
                     */
                    std::string m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * 配额类型
                     */
                    std::string m_quotaType;
                    bool m_quotaTypeHasBeenSet;

                    /**
                     * 配额对象名称，对应UID/GID的值
                     */
                    std::string m_quotaObjectName;
                    bool m_quotaObjectNameHasBeenSet;

                    /**
                     * 容量配额限定值
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
                     * 文件数配额限定值
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
                     * 配额状态：creating 配置中 active 已生效 modify 修改中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_USERQUOTAINFO_H_
