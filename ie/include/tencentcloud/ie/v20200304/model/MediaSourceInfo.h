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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIASOURCEINFO_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIASOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/DownInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 编辑处理的媒体源
                */
                class MediaSourceInfo : public AbstractModel
                {
                public:
                    MediaSourceInfo();
                    ~MediaSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体源资源下载信息。
                     * @return DownInfo 媒体源资源下载信息。
                     * 
                     */
                    DownInfo GetDownInfo() const;

                    /**
                     * 设置媒体源资源下载信息。
                     * @param _downInfo 媒体源资源下载信息。
                     * 
                     */
                    void SetDownInfo(const DownInfo& _downInfo);

                    /**
                     * 判断参数 DownInfo 是否已赋值
                     * @return DownInfo 是否已赋值
                     * 
                     */
                    bool DownInfoHasBeenSet() const;

                    /**
                     * 获取媒体源ID标记，用于多个输入源时，请内媒体源的定位，对于多输入的任务，一般要求必选。
ID只能包含字母、数字、下划线、中划线，长读不能超过128。
                     * @return Id 媒体源ID标记，用于多个输入源时，请内媒体源的定位，对于多输入的任务，一般要求必选。
ID只能包含字母、数字、下划线、中划线，长读不能超过128。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置媒体源ID标记，用于多个输入源时，请内媒体源的定位，对于多输入的任务，一般要求必选。
ID只能包含字母、数字、下划线、中划线，长读不能超过128。
                     * @param _id 媒体源ID标记，用于多个输入源时，请内媒体源的定位，对于多输入的任务，一般要求必选。
ID只能包含字母、数字、下划线、中划线，长读不能超过128。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取媒体源类型，具体类型如下：
Video：视频
Image：图片
Audio：音频
                     * @return Type 媒体源类型，具体类型如下：
Video：视频
Image：图片
Audio：音频
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置媒体源类型，具体类型如下：
Video：视频
Image：图片
Audio：音频
                     * @param _type 媒体源类型，具体类型如下：
Video：视频
Image：图片
Audio：音频
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 媒体源资源下载信息。
                     */
                    DownInfo m_downInfo;
                    bool m_downInfoHasBeenSet;

                    /**
                     * 媒体源ID标记，用于多个输入源时，请内媒体源的定位，对于多输入的任务，一般要求必选。
ID只能包含字母、数字、下划线、中划线，长读不能超过128。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 媒体源类型，具体类型如下：
Video：视频
Image：图片
Audio：音频
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIASOURCEINFO_H_
