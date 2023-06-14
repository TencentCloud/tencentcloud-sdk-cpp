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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAANIMATEDGRAPHICSITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAANIMATEDGRAPHICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 视频转动图结果信息
                */
                class MediaAnimatedGraphicsItem : public AbstractModel
                {
                public:
                    MediaAnimatedGraphicsItem();
                    ~MediaAnimatedGraphicsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转动图文件的存储位置。
                     * @return Storage 转动图文件的存储位置。
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置转动图文件的存储位置。
                     * @param _storage 转动图文件的存储位置。
                     * 
                     */
                    void SetStorage(const TaskOutputStorage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取转动图的文件路径。
                     * @return Path 转动图的文件路径。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置转动图的文件路径。
                     * @param _path 转动图的文件路径。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取转动图模板 ID，参见[转动图参数模板](https://cloud.tencent.com/document/product/862/37042#.E9.A2.84.E7.BD.AE.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * @return Definition 转动图模板 ID，参见[转动图参数模板](https://cloud.tencent.com/document/product/862/37042#.E9.A2.84.E7.BD.AE.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置转动图模板 ID，参见[转动图参数模板](https://cloud.tencent.com/document/product/862/37042#.E9.A2.84.E7.BD.AE.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * @param _definition 转动图模板 ID，参见[转动图参数模板](https://cloud.tencent.com/document/product/862/37042#.E9.A2.84.E7.BD.AE.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取动图格式，如 gif。
                     * @return Container 动图格式，如 gif。
                     * 
                     */
                    std::string GetContainer() const;

                    /**
                     * 设置动图格式，如 gif。
                     * @param _container 动图格式，如 gif。
                     * 
                     */
                    void SetContainer(const std::string& _container);

                    /**
                     * 判断参数 Container 是否已赋值
                     * @return Container 是否已赋值
                     * 
                     */
                    bool ContainerHasBeenSet() const;

                    /**
                     * 获取动图的高度，单位：px。
                     * @return Height 动图的高度，单位：px。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置动图的高度，单位：px。
                     * @param _height 动图的高度，单位：px。
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取动图的宽度，单位：px。
                     * @return Width 动图的宽度，单位：px。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置动图的宽度，单位：px。
                     * @param _width 动图的宽度，单位：px。
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取动图码率，单位：bps。
                     * @return Bitrate 动图码率，单位：bps。
                     * 
                     */
                    int64_t GetBitrate() const;

                    /**
                     * 设置动图码率，单位：bps。
                     * @param _bitrate 动图码率，单位：bps。
                     * 
                     */
                    void SetBitrate(const int64_t& _bitrate);

                    /**
                     * 判断参数 Bitrate 是否已赋值
                     * @return Bitrate 是否已赋值
                     * 
                     */
                    bool BitrateHasBeenSet() const;

                    /**
                     * 获取动图大小，单位：字节。
                     * @return Size 动图大小，单位：字节。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置动图大小，单位：字节。
                     * @param _size 动图大小，单位：字节。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取动图的md5值。
                     * @return Md5 动图的md5值。
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置动图的md5值。
                     * @param _md5 动图的md5值。
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取动图在视频中的起始时间偏移，单位：秒。
                     * @return StartTimeOffset 动图在视频中的起始时间偏移，单位：秒。
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置动图在视频中的起始时间偏移，单位：秒。
                     * @param _startTimeOffset 动图在视频中的起始时间偏移，单位：秒。
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取动图在视频中的结束时间偏移，单位：秒。
                     * @return EndTimeOffset 动图在视频中的结束时间偏移，单位：秒。
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置动图在视频中的结束时间偏移，单位：秒。
                     * @param _endTimeOffset 动图在视频中的结束时间偏移，单位：秒。
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                private:

                    /**
                     * 转动图文件的存储位置。
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 转动图的文件路径。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 转动图模板 ID，参见[转动图参数模板](https://cloud.tencent.com/document/product/862/37042#.E9.A2.84.E7.BD.AE.E8.BD.AC.E5.8A.A8.E5.9B.BE.E6.A8.A1.E6.9D.BF)。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 动图格式，如 gif。
                     */
                    std::string m_container;
                    bool m_containerHasBeenSet;

                    /**
                     * 动图的高度，单位：px。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 动图的宽度，单位：px。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 动图码率，单位：bps。
                     */
                    int64_t m_bitrate;
                    bool m_bitrateHasBeenSet;

                    /**
                     * 动图大小，单位：字节。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 动图的md5值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 动图在视频中的起始时间偏移，单位：秒。
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 动图在视频中的结束时间偏移，单位：秒。
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIAANIMATEDGRAPHICSITEM_H_
