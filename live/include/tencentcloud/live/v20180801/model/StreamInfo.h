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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 推流信息
                */
                class StreamInfo : public AbstractModel
                {
                public:
                    StreamInfo();
                    ~StreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播流所属应用名称
                     * @return AppName 直播流所属应用名称
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置直播流所属应用名称
                     * @param AppName 直播流所属应用名称
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取创建模式
                     * @return CreateMode 创建模式
                     */
                    std::string GetCreateMode() const;

                    /**
                     * 设置创建模式
                     * @param CreateMode 创建模式
                     */
                    void SetCreateMode(const std::string& _createMode);

                    /**
                     * 判断参数 CreateMode 是否已赋值
                     * @return CreateMode 是否已赋值
                     */
                    bool CreateModeHasBeenSet() const;

                    /**
                     * 获取创建时间，如: 2018-07-13 14:48:23
                     * @return CreateTime 创建时间，如: 2018-07-13 14:48:23
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，如: 2018-07-13 14:48:23
                     * @param CreateTime 创建时间，如: 2018-07-13 14:48:23
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取流状态
                     * @return Status 流状态
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置流状态
                     * @param Status 流状态
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取流id
                     * @return StreamId 流id
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置流id
                     * @param StreamId 流id
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取流名称
                     * @return StreamName 流名称
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称
                     * @param StreamName 流名称
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取水印id
                     * @return WaterMarkId 水印id
                     */
                    std::string GetWaterMarkId() const;

                    /**
                     * 设置水印id
                     * @param WaterMarkId 水印id
                     */
                    void SetWaterMarkId(const std::string& _waterMarkId);

                    /**
                     * 判断参数 WaterMarkId 是否已赋值
                     * @return WaterMarkId 是否已赋值
                     */
                    bool WaterMarkIdHasBeenSet() const;

                private:

                    /**
                     * 直播流所属应用名称
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 创建模式
                     */
                    std::string m_createMode;
                    bool m_createModeHasBeenSet;

                    /**
                     * 创建时间，如: 2018-07-13 14:48:23
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 流状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 流id
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * 流名称
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 水印id
                     */
                    std::string m_waterMarkId;
                    bool m_waterMarkIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_STREAMINFO_H_
