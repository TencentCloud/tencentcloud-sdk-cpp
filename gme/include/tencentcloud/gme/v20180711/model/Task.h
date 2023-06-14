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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_TASK_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 语音检测任务列表
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据的唯一ID
                     * @return DataId 数据的唯一ID
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置数据的唯一ID
                     * @param _dataId 数据的唯一ID
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取数据文件的url，为 urlencode 编码，流式则为拉流地址
                     * @return Url 数据文件的url，为 urlencode 编码，流式则为拉流地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置数据文件的url，为 urlencode 编码，流式则为拉流地址
                     * @param _url 数据文件的url，为 urlencode 编码，流式则为拉流地址
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
                     * 获取gme实时语音房间ID，通过gme实时语音进行语音分析时输入
                     * @return RoomId gme实时语音房间ID，通过gme实时语音进行语音分析时输入
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置gme实时语音房间ID，通过gme实时语音进行语音分析时输入
                     * @param _roomId gme实时语音房间ID，通过gme实时语音进行语音分析时输入
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取gme实时语音用户ID，通过gme实时语音进行语音分析时输入
                     * @return OpenId gme实时语音用户ID，通过gme实时语音进行语音分析时输入
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置gme实时语音用户ID，通过gme实时语音进行语音分析时输入
                     * @param _openId gme实时语音用户ID，通过gme实时语音进行语音分析时输入
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                private:

                    /**
                     * 数据的唯一ID
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 数据文件的url，为 urlencode 编码，流式则为拉流地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * gme实时语音房间ID，通过gme实时语音进行语音分析时输入
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * gme实时语音用户ID，通过gme实时语音进行语音分析时输入
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_TASK_H_
