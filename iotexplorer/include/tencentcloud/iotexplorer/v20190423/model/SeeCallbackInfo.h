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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECALLBACKINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECALLBACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 回调目标信息
                */
                class SeeCallbackInfo : public AbstractModel
                {
                public:
                    SeeCallbackInfo();
                    ~SeeCallbackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回调目标 ID
                     * @return CallbackId 回调目标 ID
                     * 
                     */
                    std::string GetCallbackId() const;

                    /**
                     * 设置回调目标 ID
                     * @param _callbackId 回调目标 ID
                     * 
                     */
                    void SetCallbackId(const std::string& _callbackId);

                    /**
                     * 判断参数 CallbackId 是否已赋值
                     * @return CallbackId 是否已赋值
                     * 
                     */
                    bool CallbackIdHasBeenSet() const;

                    /**
                     * 获取回调签名 token
                     * @return CallbackToken 回调签名 token
                     * 
                     */
                    std::string GetCallbackToken() const;

                    /**
                     * 设置回调签名 token
                     * @param _callbackToken 回调签名 token
                     * 
                     */
                    void SetCallbackToken(const std::string& _callbackToken);

                    /**
                     * 判断参数 CallbackToken 是否已赋值
                     * @return CallbackToken 是否已赋值
                     * 
                     */
                    bool CallbackTokenHasBeenSet() const;

                    /**
                     * 获取回调 URL
                     * @return CallbackUrl 回调 URL
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调 URL
                     * @param _callbackUrl 回调 URL
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取创建时间（秒级时间戳）
                     * @return CreateTime 创建时间（秒级时间戳）
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间（秒级时间戳）
                     * @param _createTime 创建时间（秒级时间戳）
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取回调类型
                     * @return Type 回调类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置回调类型
                     * @param _type 回调类型
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
                     * 获取更新时间（秒级时间戳）
                     * @return UpdateTime 更新时间（秒级时间戳）
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间（秒级时间戳）
                     * @param _updateTime 更新时间（秒级时间戳）
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 回调目标 ID
                     */
                    std::string m_callbackId;
                    bool m_callbackIdHasBeenSet;

                    /**
                     * 回调签名 token
                     */
                    std::string m_callbackToken;
                    bool m_callbackTokenHasBeenSet;

                    /**
                     * 回调 URL
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 创建时间（秒级时间戳）
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 回调类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 更新时间（秒级时间戳）
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEECALLBACKINFO_H_
