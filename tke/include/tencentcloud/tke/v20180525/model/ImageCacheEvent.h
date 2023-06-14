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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_IMAGECACHEEVENT_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_IMAGECACHEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 镜像缓存的事件
                */
                class ImageCacheEvent : public AbstractModel
                {
                public:
                    ImageCacheEvent();
                    ~ImageCacheEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取镜像缓存Id
                     * @return ImageCacheId 镜像缓存Id
                     * 
                     */
                    std::string GetImageCacheId() const;

                    /**
                     * 设置镜像缓存Id
                     * @param _imageCacheId 镜像缓存Id
                     * 
                     */
                    void SetImageCacheId(const std::string& _imageCacheId);

                    /**
                     * 判断参数 ImageCacheId 是否已赋值
                     * @return ImageCacheId 是否已赋值
                     * 
                     */
                    bool ImageCacheIdHasBeenSet() const;

                    /**
                     * 获取事件类型, Normal或者Warning
                     * @return Type 事件类型, Normal或者Warning
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件类型, Normal或者Warning
                     * @param _type 事件类型, Normal或者Warning
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
                     * 获取事件原因简述
                     * @return Reason 事件原因简述
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置事件原因简述
                     * @param _reason 事件原因简述
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取事件原因详述
                     * @return Message 事件原因详述
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置事件原因详述
                     * @param _message 事件原因详述
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取事件第一次出现时间
                     * @return FirstTimestamp 事件第一次出现时间
                     * 
                     */
                    std::string GetFirstTimestamp() const;

                    /**
                     * 设置事件第一次出现时间
                     * @param _firstTimestamp 事件第一次出现时间
                     * 
                     */
                    void SetFirstTimestamp(const std::string& _firstTimestamp);

                    /**
                     * 判断参数 FirstTimestamp 是否已赋值
                     * @return FirstTimestamp 是否已赋值
                     * 
                     */
                    bool FirstTimestampHasBeenSet() const;

                    /**
                     * 获取事件最后一次出现时间
                     * @return LastTimestamp 事件最后一次出现时间
                     * 
                     */
                    std::string GetLastTimestamp() const;

                    /**
                     * 设置事件最后一次出现时间
                     * @param _lastTimestamp 事件最后一次出现时间
                     * 
                     */
                    void SetLastTimestamp(const std::string& _lastTimestamp);

                    /**
                     * 判断参数 LastTimestamp 是否已赋值
                     * @return LastTimestamp 是否已赋值
                     * 
                     */
                    bool LastTimestampHasBeenSet() const;

                private:

                    /**
                     * 镜像缓存Id
                     */
                    std::string m_imageCacheId;
                    bool m_imageCacheIdHasBeenSet;

                    /**
                     * 事件类型, Normal或者Warning
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件原因简述
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 事件原因详述
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 事件第一次出现时间
                     */
                    std::string m_firstTimestamp;
                    bool m_firstTimestampHasBeenSet;

                    /**
                     * 事件最后一次出现时间
                     */
                    std::string m_lastTimestamp;
                    bool m_lastTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_IMAGECACHEEVENT_H_
