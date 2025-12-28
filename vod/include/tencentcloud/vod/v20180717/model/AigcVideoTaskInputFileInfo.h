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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 生视频任务输入的图片文件信息。
                */
                class AigcVideoTaskInputFileInfo : public AbstractModel
                {
                public:
                    AigcVideoTaskInputFileInfo();
                    ~AigcVideoTaskInputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 URL；</li> 
                     * @return Type 输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 URL；</li> 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 URL；</li> 
                     * @param _type 输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 URL；</li> 
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
                     * 获取媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。说明：
1. 推荐使用小于10M的图片；
2. 图片格式的取值为：jpeg，jpg, png。
                     * @return FileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。说明：
1. 推荐使用小于10M的图片；
2. 图片格式的取值为：jpeg，jpg, png。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。说明：
1. 推荐使用小于10M的图片；
2. 图片格式的取值为：jpeg，jpg, png。
                     * @param _fileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。说明：
1. 推荐使用小于10M的图片；
2. 图片格式的取值为：jpeg，jpg, png。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
说明：
1. 推荐使用小于10M的图片；
2. 图片格式的取值为：jpeg，jpg, png。
                     * @return Url 可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
说明：
1. 推荐使用小于10M的图片；
2. 图片格式的取值为：jpeg，jpg, png。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
说明：
1. 推荐使用小于10M的图片；
2. 图片格式的取值为：jpeg，jpg, png。
                     * @param _url 可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
说明：
1. 推荐使用小于10M的图片；
2. 图片格式的取值为：jpeg，jpg, png。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取参考类型，GV模型适用。
注意：

当使用GV模型时，可作为参考方式,可选asset(素材)、style(风格)。
                     * @return ReferenceType 参考类型，GV模型适用。
注意：

当使用GV模型时，可作为参考方式,可选asset(素材)、style(风格)。
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置参考类型，GV模型适用。
注意：

当使用GV模型时，可作为参考方式,可选asset(素材)、style(风格)。
                     * @param _referenceType 参考类型，GV模型适用。
注意：

当使用GV模型时，可作为参考方式,可选asset(素材)、style(风格)。
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取主体id.
适用模型：Vidu-q2.
当需要对图片标识主体时，需要每个图片都带主体id，后续生成时可以通过@主体id的方式使用。
                     * @return ObjectId 主体id.
适用模型：Vidu-q2.
当需要对图片标识主体时，需要每个图片都带主体id，后续生成时可以通过@主体id的方式使用。
                     * 
                     */
                    std::string GetObjectId() const;

                    /**
                     * 设置主体id.
适用模型：Vidu-q2.
当需要对图片标识主体时，需要每个图片都带主体id，后续生成时可以通过@主体id的方式使用。
                     * @param _objectId 主体id.
适用模型：Vidu-q2.
当需要对图片标识主体时，需要每个图片都带主体id，后续生成时可以通过@主体id的方式使用。
                     * 
                     */
                    void SetObjectId(const std::string& _objectId);

                    /**
                     * 判断参数 ObjectId 是否已赋值
                     * @return ObjectId 是否已赋值
                     * 
                     */
                    bool ObjectIdHasBeenSet() const;

                    /**
                     * 获取适用于Vidu-q2模型。
当全部图片携带主体id时，可针对主体设置音色id。 音色列表：https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg
                     * @return VoiceId 适用于Vidu-q2模型。
当全部图片携带主体id时，可针对主体设置音色id。 音色列表：https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置适用于Vidu-q2模型。
当全部图片携带主体id时，可针对主体设置音色id。 音色列表：https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg
                     * @param _voiceId 适用于Vidu-q2模型。
当全部图片携带主体id时，可针对主体设置音色id。 音色列表：https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                private:

                    /**
                     * 输入的视频文件类型。取值有： <li>File：点播媒体文件；</li> <li>Url：可访问的 URL；</li> 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。当 Type 取值为 File 时，本参数有效。说明：
1. 推荐使用小于10M的图片；
2. 图片格式的取值为：jpeg，jpg, png。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 可访问的文件 URL。当 Type 取值为 Url 时，本参数有效。
说明：
1. 推荐使用小于10M的图片；
2. 图片格式的取值为：jpeg，jpg, png。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 参考类型，GV模型适用。
注意：

当使用GV模型时，可作为参考方式,可选asset(素材)、style(风格)。
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * 主体id.
适用模型：Vidu-q2.
当需要对图片标识主体时，需要每个图片都带主体id，后续生成时可以通过@主体id的方式使用。
                     */
                    std::string m_objectId;
                    bool m_objectIdHasBeenSet;

                    /**
                     * 适用于Vidu-q2模型。
当全部图片携带主体id时，可针对主体设置音色id。 音色列表：https://shengshu.feishu.cn/sheets/EgFvs6DShhiEBStmjzccr5gonOg
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUTFILEINFO_H_
