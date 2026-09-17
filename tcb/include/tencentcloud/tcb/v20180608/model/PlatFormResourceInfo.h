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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMRESOURCEINFO_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMRESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 平台版资源信息
                */
                class PlatFormResourceInfo : public AbstractModel
                {
                public:
                    PlatFormResourceInfo();
                    ~PlatFormResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源类系</p><p>枚举值：</p><ul><li>log： 日志</li><li>storage： 云存储</li><li>hosting： 静态托管</li></ul>
                     * @return ResType <p>资源类系</p><p>枚举值：</p><ul><li>log： 日志</li><li>storage： 云存储</li><li>hosting： 静态托管</li></ul>
                     * 
                     */
                    std::string GetResType() const;

                    /**
                     * 设置<p>资源类系</p><p>枚举值：</p><ul><li>log： 日志</li><li>storage： 云存储</li><li>hosting： 静态托管</li></ul>
                     * @param _resType <p>资源类系</p><p>枚举值：</p><ul><li>log： 日志</li><li>storage： 云存储</li><li>hosting： 静态托管</li></ul>
                     * 
                     */
                    void SetResType(const std::string& _resType);

                    /**
                     * 判断参数 ResType 是否已赋值
                     * @return ResType 是否已赋值
                     * 
                     */
                    bool ResTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源唯一标识</p>
                     * @return ResName <p>资源唯一标识</p>
                     * 
                     */
                    std::string GetResName() const;

                    /**
                     * 设置<p>资源唯一标识</p>
                     * @param _resName <p>资源唯一标识</p>
                     * 
                     */
                    void SetResName(const std::string& _resName);

                    /**
                     * 判断参数 ResName 是否已赋值
                     * @return ResName 是否已赋值
                     * 
                     */
                    bool ResNameHasBeenSet() const;

                    /**
                     * 获取<p>资源详细信息</p>
                     * @return Detail <p>资源详细信息</p>
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置<p>资源详细信息</p>
                     * @param _detail <p>资源详细信息</p>
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取<p>资源状态</p><p>枚举值：</p><ul><li>0： 正常</li><li>5： 初始化中</li></ul>
                     * @return Status <p>资源状态</p><p>枚举值：</p><ul><li>0： 正常</li><li>5： 初始化中</li></ul>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>资源状态</p><p>枚举值：</p><ul><li>0： 正常</li><li>5： 初始化中</li></ul>
                     * @param _status <p>资源状态</p><p>枚举值：</p><ul><li>0： 正常</li><li>5： 初始化中</li></ul>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>资源id</p>
                     * @return PlatformId <p>资源id</p>
                     * 
                     */
                    uint64_t GetPlatformId() const;

                    /**
                     * 设置<p>资源id</p>
                     * @param _platformId <p>资源id</p>
                     * 
                     */
                    void SetPlatformId(const uint64_t& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                    /**
                     * 获取<p>对用平台资源id</p>
                     * @return Id <p>对用平台资源id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>对用平台资源id</p>
                     * @param _id <p>对用平台资源id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * <p>资源类系</p><p>枚举值：</p><ul><li>log： 日志</li><li>storage： 云存储</li><li>hosting： 静态托管</li></ul>
                     */
                    std::string m_resType;
                    bool m_resTypeHasBeenSet;

                    /**
                     * <p>资源唯一标识</p>
                     */
                    std::string m_resName;
                    bool m_resNameHasBeenSet;

                    /**
                     * <p>资源详细信息</p>
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>资源状态</p><p>枚举值：</p><ul><li>0： 正常</li><li>5： 初始化中</li></ul>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>资源id</p>
                     */
                    uint64_t m_platformId;
                    bool m_platformIdHasBeenSet;

                    /**
                     * <p>对用平台资源id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMRESOURCEINFO_H_
