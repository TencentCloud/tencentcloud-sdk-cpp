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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALATTACHMENTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALATTACHMENTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 渠道透传字段
                */
                class CloudExternalAttachmentData : public AbstractModel
                {
                public:
                    CloudExternalAttachmentData();
                    ~CloudExternalAttachmentData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道名
                     * @return ChannelName 渠道名
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名
                     * @param _channelName 渠道名
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取渠道透传字段，由各个渠道自行定义
                     * @return AttachmentData 渠道透传字段，由各个渠道自行定义
                     * 
                     */
                    std::string GetAttachmentData() const;

                    /**
                     * 设置渠道透传字段，由各个渠道自行定义
                     * @param _attachmentData 渠道透传字段，由各个渠道自行定义
                     * 
                     */
                    void SetAttachmentData(const std::string& _attachmentData);

                    /**
                     * 判断参数 AttachmentData 是否已赋值
                     * @return AttachmentData 是否已赋值
                     * 
                     */
                    bool AttachmentDataHasBeenSet() const;

                private:

                    /**
                     * 渠道名
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 渠道透传字段，由各个渠道自行定义
                     */
                    std::string m_attachmentData;
                    bool m_attachmentDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDEXTERNALATTACHMENTDATA_H_
