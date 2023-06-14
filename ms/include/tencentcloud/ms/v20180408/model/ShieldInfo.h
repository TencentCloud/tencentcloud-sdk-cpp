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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_SHIELDINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_SHIELDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 加固后app的信息
                */
                class ShieldInfo : public AbstractModel
                {
                public:
                    ShieldInfo();
                    ~ShieldInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加固结果的返回码
                     * @return ShieldCode 加固结果的返回码
                     * 
                     */
                    uint64_t GetShieldCode() const;

                    /**
                     * 设置加固结果的返回码
                     * @param _shieldCode 加固结果的返回码
                     * 
                     */
                    void SetShieldCode(const uint64_t& _shieldCode);

                    /**
                     * 判断参数 ShieldCode 是否已赋值
                     * @return ShieldCode 是否已赋值
                     * 
                     */
                    bool ShieldCodeHasBeenSet() const;

                    /**
                     * 获取加固后app的大小
                     * @return ShieldSize 加固后app的大小
                     * 
                     */
                    uint64_t GetShieldSize() const;

                    /**
                     * 设置加固后app的大小
                     * @param _shieldSize 加固后app的大小
                     * 
                     */
                    void SetShieldSize(const uint64_t& _shieldSize);

                    /**
                     * 判断参数 ShieldSize 是否已赋值
                     * @return ShieldSize 是否已赋值
                     * 
                     */
                    bool ShieldSizeHasBeenSet() const;

                    /**
                     * 获取加固后app的md5
                     * @return ShieldMd5 加固后app的md5
                     * 
                     */
                    std::string GetShieldMd5() const;

                    /**
                     * 设置加固后app的md5
                     * @param _shieldMd5 加固后app的md5
                     * 
                     */
                    void SetShieldMd5(const std::string& _shieldMd5);

                    /**
                     * 判断参数 ShieldMd5 是否已赋值
                     * @return ShieldMd5 是否已赋值
                     * 
                     */
                    bool ShieldMd5HasBeenSet() const;

                    /**
                     * 获取加固后的APP下载地址，该地址有效期为20分钟，请及时下载
                     * @return AppUrl 加固后的APP下载地址，该地址有效期为20分钟，请及时下载
                     * 
                     */
                    std::string GetAppUrl() const;

                    /**
                     * 设置加固后的APP下载地址，该地址有效期为20分钟，请及时下载
                     * @param _appUrl 加固后的APP下载地址，该地址有效期为20分钟，请及时下载
                     * 
                     */
                    void SetAppUrl(const std::string& _appUrl);

                    /**
                     * 判断参数 AppUrl 是否已赋值
                     * @return AppUrl 是否已赋值
                     * 
                     */
                    bool AppUrlHasBeenSet() const;

                    /**
                     * 获取加固的提交时间
                     * @return TaskTime 加固的提交时间
                     * 
                     */
                    uint64_t GetTaskTime() const;

                    /**
                     * 设置加固的提交时间
                     * @param _taskTime 加固的提交时间
                     * 
                     */
                    void SetTaskTime(const uint64_t& _taskTime);

                    /**
                     * 判断参数 TaskTime 是否已赋值
                     * @return TaskTime 是否已赋值
                     * 
                     */
                    bool TaskTimeHasBeenSet() const;

                    /**
                     * 获取任务唯一标识
                     * @return ItemId 任务唯一标识
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置任务唯一标识
                     * @param _itemId 任务唯一标识
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取加固版本，basic基础版，professional专业版，enterprise企业版
                     * @return ServiceEdition 加固版本，basic基础版，professional专业版，enterprise企业版
                     * 
                     */
                    std::string GetServiceEdition() const;

                    /**
                     * 设置加固版本，basic基础版，professional专业版，enterprise企业版
                     * @param _serviceEdition 加固版本，basic基础版，professional专业版，enterprise企业版
                     * 
                     */
                    void SetServiceEdition(const std::string& _serviceEdition);

                    /**
                     * 判断参数 ServiceEdition 是否已赋值
                     * @return ServiceEdition 是否已赋值
                     * 
                     */
                    bool ServiceEditionHasBeenSet() const;

                private:

                    /**
                     * 加固结果的返回码
                     */
                    uint64_t m_shieldCode;
                    bool m_shieldCodeHasBeenSet;

                    /**
                     * 加固后app的大小
                     */
                    uint64_t m_shieldSize;
                    bool m_shieldSizeHasBeenSet;

                    /**
                     * 加固后app的md5
                     */
                    std::string m_shieldMd5;
                    bool m_shieldMd5HasBeenSet;

                    /**
                     * 加固后的APP下载地址，该地址有效期为20分钟，请及时下载
                     */
                    std::string m_appUrl;
                    bool m_appUrlHasBeenSet;

                    /**
                     * 加固的提交时间
                     */
                    uint64_t m_taskTime;
                    bool m_taskTimeHasBeenSet;

                    /**
                     * 任务唯一标识
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 加固版本，basic基础版，professional专业版，enterprise企业版
                     */
                    std::string m_serviceEdition;
                    bool m_serviceEditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_SHIELDINFO_H_
