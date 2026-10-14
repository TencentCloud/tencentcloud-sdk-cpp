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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEOSNAPSHOTCONFIGREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEOSNAPSHOTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateVideoSnapshotConfig请求参数结构体
                */
                class CreateVideoSnapshotConfigRequest : public AbstractModel
                {
                public:
                    CreateVideoSnapshotConfigRequest();
                    ~CreateVideoSnapshotConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>截图配置名称</p><p>入参限制：中文、英文、数字、“-”、“_” 长度不超过128个字符</p>
                     * @return Name <p>截图配置名称</p><p>入参限制：中文、英文、数字、“-”、“_” 长度不超过128个字符</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>截图配置名称</p><p>入参限制：中文、英文、数字、“-”、“_” 长度不超过128个字符</p>
                     * @param _name <p>截图配置名称</p><p>入参限制：中文、英文、数字、“-”、“_” 长度不超过128个字符</p>
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
                     * 获取<p>图片文件的热存储天数</p><p>枚举值：</p><ul><li>7： 7天</li><li>15： 15天</li><li>30： 30天</li><li>60： 60天</li><li>90： 90天</li><li>180： 180天</li><li>270： 270天</li><li>360： 360天</li><li>540： 540天</li><li>720： 720天</li><li>900： 900天</li><li>1080： 1080天</li></ul>
                     * @return FileExpires <p>图片文件的热存储天数</p><p>枚举值：</p><ul><li>7： 7天</li><li>15： 15天</li><li>30： 30天</li><li>60： 60天</li><li>90： 90天</li><li>180： 180天</li><li>270： 270天</li><li>360： 360天</li><li>540： 540天</li><li>720： 720天</li><li>900： 900天</li><li>1080： 1080天</li></ul>
                     * 
                     */
                    int64_t GetFileExpires() const;

                    /**
                     * 设置<p>图片文件的热存储天数</p><p>枚举值：</p><ul><li>7： 7天</li><li>15： 15天</li><li>30： 30天</li><li>60： 60天</li><li>90： 90天</li><li>180： 180天</li><li>270： 270天</li><li>360： 360天</li><li>540： 540天</li><li>720： 720天</li><li>900： 900天</li><li>1080： 1080天</li></ul>
                     * @param _fileExpires <p>图片文件的热存储天数</p><p>枚举值：</p><ul><li>7： 7天</li><li>15： 15天</li><li>30： 30天</li><li>60： 60天</li><li>90： 90天</li><li>180： 180天</li><li>270： 270天</li><li>360： 360天</li><li>540： 540天</li><li>720： 720天</li><li>900： 900天</li><li>1080： 1080天</li></ul>
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
                     * 获取<p>截图结果回调地址</p>
                     * @return Callback <p>截图结果回调地址</p>
                     * 
                     */
                    CallbackURL GetCallback() const;

                    /**
                     * 设置<p>截图结果回调地址</p>
                     * @param _callback <p>截图结果回调地址</p>
                     * 
                     */
                    void SetCallback(const CallbackURL& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                private:

                    /**
                     * <p>截图配置名称</p><p>入参限制：中文、英文、数字、“-”、“_” 长度不超过128个字符</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>截图模板Id</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>图片文件的热存储天数</p><p>枚举值：</p><ul><li>7： 7天</li><li>15： 15天</li><li>30： 30天</li><li>60： 60天</li><li>90： 90天</li><li>180： 180天</li><li>270： 270天</li><li>360： 360天</li><li>540： 540天</li><li>720： 720天</li><li>900： 900天</li><li>1080： 1080天</li></ul>
                     */
                    int64_t m_fileExpires;
                    bool m_fileExpiresHasBeenSet;

                    /**
                     * <p>截图结果回调地址</p>
                     */
                    CallbackURL m_callback;
                    bool m_callbackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVIDEOSNAPSHOTCONFIGREQUEST_H_
