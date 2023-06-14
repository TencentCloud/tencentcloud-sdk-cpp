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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_SERVICEDATA_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_SERVICEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * 服务响应数据
                */
                class ServiceData : public AbstractModel
                {
                public:
                    ServiceData();
                    ~ServiceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网站保护关联资产数
                     * @return ProtectURLCount 网站保护关联资产数
                     * 
                     */
                    int64_t GetProtectURLCount() const;

                    /**
                     * 设置网站保护关联资产数
                     * @param _protectURLCount 网站保护关联资产数
                     * 
                     */
                    void SetProtectURLCount(const int64_t& _protectURLCount);

                    /**
                     * 判断参数 ProtectURLCount 是否已赋值
                     * @return ProtectURLCount 是否已赋值
                     * 
                     */
                    bool ProtectURLCountHasBeenSet() const;

                    /**
                     * 获取网站保护服务到期时间
                     * @return ProtectURLExpireTime 网站保护服务到期时间
                     * 
                     */
                    std::string GetProtectURLExpireTime() const;

                    /**
                     * 设置网站保护服务到期时间
                     * @param _protectURLExpireTime 网站保护服务到期时间
                     * 
                     */
                    void SetProtectURLExpireTime(const std::string& _protectURLExpireTime);

                    /**
                     * 判断参数 ProtectURLExpireTime 是否已赋值
                     * @return ProtectURLExpireTime 是否已赋值
                     * 
                     */
                    bool ProtectURLExpireTimeHasBeenSet() const;

                    /**
                     * 获取应用保护关联资产数
                     * @return ProtectAPPCount 应用保护关联资产数
                     * 
                     */
                    int64_t GetProtectAPPCount() const;

                    /**
                     * 设置应用保护关联资产数
                     * @param _protectAPPCount 应用保护关联资产数
                     * 
                     */
                    void SetProtectAPPCount(const int64_t& _protectAPPCount);

                    /**
                     * 判断参数 ProtectAPPCount 是否已赋值
                     * @return ProtectAPPCount 是否已赋值
                     * 
                     */
                    bool ProtectAPPCountHasBeenSet() const;

                    /**
                     * 获取应用保护服务到期时间
                     * @return ProtectAPPExpireTime 应用保护服务到期时间
                     * 
                     */
                    std::string GetProtectAPPExpireTime() const;

                    /**
                     * 设置应用保护服务到期时间
                     * @param _protectAPPExpireTime 应用保护服务到期时间
                     * 
                     */
                    void SetProtectAPPExpireTime(const std::string& _protectAPPExpireTime);

                    /**
                     * 判断参数 ProtectAPPExpireTime 是否已赋值
                     * @return ProtectAPPExpireTime 是否已赋值
                     * 
                     */
                    bool ProtectAPPExpireTimeHasBeenSet() const;

                    /**
                     * 获取公众号保护关联资产数
                     * @return ProtectOfficialAccountCount 公众号保护关联资产数
                     * 
                     */
                    int64_t GetProtectOfficialAccountCount() const;

                    /**
                     * 设置公众号保护关联资产数
                     * @param _protectOfficialAccountCount 公众号保护关联资产数
                     * 
                     */
                    void SetProtectOfficialAccountCount(const int64_t& _protectOfficialAccountCount);

                    /**
                     * 判断参数 ProtectOfficialAccountCount 是否已赋值
                     * @return ProtectOfficialAccountCount 是否已赋值
                     * 
                     */
                    bool ProtectOfficialAccountCountHasBeenSet() const;

                    /**
                     * 获取公众号保护服务到期时间
                     * @return ProtectOfficialAccountExpireTime 公众号保护服务到期时间
                     * 
                     */
                    std::string GetProtectOfficialAccountExpireTime() const;

                    /**
                     * 设置公众号保护服务到期时间
                     * @param _protectOfficialAccountExpireTime 公众号保护服务到期时间
                     * 
                     */
                    void SetProtectOfficialAccountExpireTime(const std::string& _protectOfficialAccountExpireTime);

                    /**
                     * 判断参数 ProtectOfficialAccountExpireTime 是否已赋值
                     * @return ProtectOfficialAccountExpireTime 是否已赋值
                     * 
                     */
                    bool ProtectOfficialAccountExpireTimeHasBeenSet() const;

                    /**
                     * 获取小程序保护关联资产数
                     * @return ProtectMiniProgramCount 小程序保护关联资产数
                     * 
                     */
                    int64_t GetProtectMiniProgramCount() const;

                    /**
                     * 设置小程序保护关联资产数
                     * @param _protectMiniProgramCount 小程序保护关联资产数
                     * 
                     */
                    void SetProtectMiniProgramCount(const int64_t& _protectMiniProgramCount);

                    /**
                     * 判断参数 ProtectMiniProgramCount 是否已赋值
                     * @return ProtectMiniProgramCount 是否已赋值
                     * 
                     */
                    bool ProtectMiniProgramCountHasBeenSet() const;

                    /**
                     * 获取小程序保护服务到期时间
                     * @return ProtectMiniProgramExpireTime 小程序保护服务到期时间
                     * 
                     */
                    std::string GetProtectMiniProgramExpireTime() const;

                    /**
                     * 设置小程序保护服务到期时间
                     * @param _protectMiniProgramExpireTime 小程序保护服务到期时间
                     * 
                     */
                    void SetProtectMiniProgramExpireTime(const std::string& _protectMiniProgramExpireTime);

                    /**
                     * 判断参数 ProtectMiniProgramExpireTime 是否已赋值
                     * @return ProtectMiniProgramExpireTime 是否已赋值
                     * 
                     */
                    bool ProtectMiniProgramExpireTimeHasBeenSet() const;

                    /**
                     * 获取关停下架使用次数
                     * @return OfflineCount 关停下架使用次数
                     * 
                     */
                    int64_t GetOfflineCount() const;

                    /**
                     * 设置关停下架使用次数
                     * @param _offlineCount 关停下架使用次数
                     * 
                     */
                    void SetOfflineCount(const int64_t& _offlineCount);

                    /**
                     * 判断参数 OfflineCount 是否已赋值
                     * @return OfflineCount 是否已赋值
                     * 
                     */
                    bool OfflineCountHasBeenSet() const;

                private:

                    /**
                     * 网站保护关联资产数
                     */
                    int64_t m_protectURLCount;
                    bool m_protectURLCountHasBeenSet;

                    /**
                     * 网站保护服务到期时间
                     */
                    std::string m_protectURLExpireTime;
                    bool m_protectURLExpireTimeHasBeenSet;

                    /**
                     * 应用保护关联资产数
                     */
                    int64_t m_protectAPPCount;
                    bool m_protectAPPCountHasBeenSet;

                    /**
                     * 应用保护服务到期时间
                     */
                    std::string m_protectAPPExpireTime;
                    bool m_protectAPPExpireTimeHasBeenSet;

                    /**
                     * 公众号保护关联资产数
                     */
                    int64_t m_protectOfficialAccountCount;
                    bool m_protectOfficialAccountCountHasBeenSet;

                    /**
                     * 公众号保护服务到期时间
                     */
                    std::string m_protectOfficialAccountExpireTime;
                    bool m_protectOfficialAccountExpireTimeHasBeenSet;

                    /**
                     * 小程序保护关联资产数
                     */
                    int64_t m_protectMiniProgramCount;
                    bool m_protectMiniProgramCountHasBeenSet;

                    /**
                     * 小程序保护服务到期时间
                     */
                    std::string m_protectMiniProgramExpireTime;
                    bool m_protectMiniProgramExpireTimeHasBeenSet;

                    /**
                     * 关停下架使用次数
                     */
                    int64_t m_offlineCount;
                    bool m_offlineCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_SERVICEDATA_H_
