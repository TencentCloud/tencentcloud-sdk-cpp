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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTCONFIGINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTCONFIGINFO_H_

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
                * 截图配置信息
                */
                class VideoSnapshotConfigInfo : public AbstractModel
                {
                public:
                    VideoSnapshotConfigInfo();
                    ~VideoSnapshotConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>截图配置Id</p>
                     * @return ConfigId <p>截图配置Id</p>
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置<p>截图配置Id</p>
                     * @param _configId <p>截图配置Id</p>
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>截图配置名称</p>
                     * @return Name <p>截图配置名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>截图配置名称</p>
                     * @param _name <p>截图配置名称</p>
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
                     * 获取<p>截图模板Id</p>
                     * @return TemplateId <p>截图模板Id</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>截图模板Id</p>
                     * @param _templateId <p>截图模板Id</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>截图模板名称</p>
                     * @return TemplateName <p>截图模板名称</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>截图模板名称</p>
                     * @param _templateName <p>截图模板名称</p>
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @return Type <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * @param _type <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>图片存储天数</p><p>单位：天</p>
                     * @return FileExpires <p>图片存储天数</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetFileExpires() const;

                    /**
                     * 设置<p>图片存储天数</p><p>单位：天</p>
                     * @param _fileExpires <p>图片存储天数</p><p>单位：天</p>
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
                     * 获取<p>回调配置</p>
                     * @return Callback <p>回调配置</p>
                     * 
                     */
                    CallbackURL GetCallback() const;

                    /**
                     * 设置<p>回调配置</p>
                     * @param _callback <p>回调配置</p>
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
                     * 获取<p>截图配置关联的通道数</p>
                     * @return RelatedChannelCount <p>截图配置关联的通道数</p>
                     * 
                     */
                    int64_t GetRelatedChannelCount() const;

                    /**
                     * 设置<p>截图配置关联的通道数</p>
                     * @param _relatedChannelCount <p>截图配置关联的通道数</p>
                     * 
                     */
                    void SetRelatedChannelCount(const int64_t& _relatedChannelCount);

                    /**
                     * 判断参数 RelatedChannelCount 是否已赋值
                     * @return RelatedChannelCount 是否已赋值
                     * 
                     */
                    bool RelatedChannelCountHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>最近一次更新时间</p>
                     * @return UpdateTime <p>最近一次更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>最近一次更新时间</p>
                     * @param _updateTime <p>最近一次更新时间</p>
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
                     * <p>截图配置Id</p>
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * <p>截图配置名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>截图模板Id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>截图模板名称</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>截图类型</p><p>枚举值：</p><ul><li>1： 实时截帧</li><li>2： 低频截帧</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>图片存储天数</p><p>单位：天</p>
                     */
                    int64_t m_fileExpires;
                    bool m_fileExpiresHasBeenSet;

                    /**
                     * <p>回调配置</p>
                     */
                    CallbackURL m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * <p>截图配置关联的通道数</p>
                     */
                    int64_t m_relatedChannelCount;
                    bool m_relatedChannelCountHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近一次更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VIDEOSNAPSHOTCONFIGINFO_H_
