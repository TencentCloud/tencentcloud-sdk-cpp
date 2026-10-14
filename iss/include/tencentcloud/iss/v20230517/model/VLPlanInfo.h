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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/CallbackURL.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 视觉理解计划信息
                */
                class VLPlanInfo : public AbstractModel
                {
                public:
                    VLPlanInfo();
                    ~VLPlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>计划ID</p>
                     * @return VLPlanId <p>计划ID</p>
                     * 
                     */
                    std::string GetVLPlanId() const;

                    /**
                     * 设置<p>计划ID</p>
                     * @param _vLPlanId <p>计划ID</p>
                     * 
                     */
                    void SetVLPlanId(const std::string& _vLPlanId);

                    /**
                     * 判断参数 VLPlanId 是否已赋值
                     * @return VLPlanId 是否已赋值
                     * 
                     */
                    bool VLPlanIdHasBeenSet() const;

                    /**
                     * 获取<p>计划名称</p>
                     * @return Name <p>计划名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>计划名称</p>
                     * @param _name <p>计划名称</p>
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
                     * 获取<p>计划描述</p>
                     * @return Describe <p>计划描述</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置<p>计划描述</p>
                     * @param _describe <p>计划描述</p>
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取<p>视觉理解模板ID</p>
                     * @return VLTemplateId <p>视觉理解模板ID</p>
                     * 
                     */
                    std::string GetVLTemplateId() const;

                    /**
                     * 设置<p>视觉理解模板ID</p>
                     * @param _vLTemplateId <p>视觉理解模板ID</p>
                     * 
                     */
                    void SetVLTemplateId(const std::string& _vLTemplateId);

                    /**
                     * 判断参数 VLTemplateId 是否已赋值
                     * @return VLTemplateId 是否已赋值
                     * 
                     */
                    bool VLTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>回调通知配置</p>
                     * @return Callback <p>回调通知配置</p>
                     * 
                     */
                    CallbackURL GetCallback() const;

                    /**
                     * 设置<p>回调通知配置</p>
                     * @param _callback <p>回调通知配置</p>
                     * 
                     */
                    void SetCallback(const CallbackURL& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取<p>文件过期时间（秒）</p>
                     * @return FileExpires <p>文件过期时间（秒）</p>
                     * 
                     */
                    int64_t GetFileExpires() const;

                    /**
                     * 设置<p>文件过期时间（秒）</p>
                     * @param _fileExpires <p>文件过期时间（秒）</p>
                     * 
                     */
                    void SetFileExpires(const int64_t& _fileExpires);

                    /**
                     * 判断参数 FileExpires 是否已赋值
                     * @return FileExpires 是否已赋值
                     * 
                     */
                    bool FileExpiresHasBeenSet() const;

                    /**
                     * 获取<p>计划包含的通道数量</p>
                     * @return ChannelCount <p>计划包含的通道数量</p>
                     * 
                     */
                    int64_t GetChannelCount() const;

                    /**
                     * 设置<p>计划包含的通道数量</p>
                     * @param _channelCount <p>计划包含的通道数量</p>
                     * 
                     */
                    void SetChannelCount(const int64_t& _channelCount);

                    /**
                     * 判断参数 ChannelCount 是否已赋值
                     * @return ChannelCount 是否已赋值
                     * 
                     */
                    bool ChannelCountHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>最近一次更新时间</p>
                     * @return UpdatedAt <p>最近一次更新时间</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>最近一次更新时间</p>
                     * @param _updatedAt <p>最近一次更新时间</p>
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>计划ID</p>
                     */
                    std::string m_vLPlanId;
                    bool m_vLPlanIdHasBeenSet;

                    /**
                     * <p>计划名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>计划描述</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>视觉理解模板ID</p>
                     */
                    std::string m_vLTemplateId;
                    bool m_vLTemplateIdHasBeenSet;

                    /**
                     * <p>回调通知配置</p>
                     */
                    CallbackURL m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * <p>文件过期时间（秒）</p>
                     */
                    int64_t m_fileExpires;
                    bool m_fileExpiresHasBeenSet;

                    /**
                     * <p>计划包含的通道数量</p>
                     */
                    int64_t m_channelCount;
                    bool m_channelCountHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>最近一次更新时间</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANINFO_H_
