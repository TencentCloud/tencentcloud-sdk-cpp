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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_PICMARKINFOITEM_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_PICMARKINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/CosInfo.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 图片水印信息
                */
                class PicMarkInfoItem : public AbstractModel
                {
                public:
                    PicMarkInfoItem();
                    ~PicMarkInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片水印的X坐标。
                     * @return PosX 图片水印的X坐标。
                     * 
                     */
                    int64_t GetPosX() const;

                    /**
                     * 设置图片水印的X坐标。
                     * @param _posX 图片水印的X坐标。
                     * 
                     */
                    void SetPosX(const int64_t& _posX);

                    /**
                     * 判断参数 PosX 是否已赋值
                     * @return PosX 是否已赋值
                     * 
                     */
                    bool PosXHasBeenSet() const;

                    /**
                     * 获取图片水印的Y坐标 。
                     * @return PosY 图片水印的Y坐标 。
                     * 
                     */
                    int64_t GetPosY() const;

                    /**
                     * 设置图片水印的Y坐标 。
                     * @param _posY 图片水印的Y坐标 。
                     * 
                     */
                    void SetPosY(const int64_t& _posY);

                    /**
                     * 判断参数 PosY 是否已赋值
                     * @return PosY 是否已赋值
                     * 
                     */
                    bool PosYHasBeenSet() const;

                    /**
                     * 获取图片水印路径,，如果不从Cos拉取水印，则必填
                     * @return Path 图片水印路径,，如果不从Cos拉取水印，则必填
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置图片水印路径,，如果不从Cos拉取水印，则必填
                     * @param _path 图片水印路径,，如果不从Cos拉取水印，则必填
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
                     * 获取图片水印的Cos 信息，从Cos上拉取图片水印时必填。
                     * @return CosInfo 图片水印的Cos 信息，从Cos上拉取图片水印时必填。
                     * 
                     */
                    CosInfo GetCosInfo() const;

                    /**
                     * 设置图片水印的Cos 信息，从Cos上拉取图片水印时必填。
                     * @param _cosInfo 图片水印的Cos 信息，从Cos上拉取图片水印时必填。
                     * 
                     */
                    void SetCosInfo(const CosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                    /**
                     * 获取图片水印宽度，不填为图片原始宽度。
                     * @return Width 图片水印宽度，不填为图片原始宽度。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置图片水印宽度，不填为图片原始宽度。
                     * @param _width 图片水印宽度，不填为图片原始宽度。
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
                     * 获取图片水印高度，不填为图片原始高度。
                     * @return Height 图片水印高度，不填为图片原始高度。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置图片水印高度，不填为图片原始高度。
                     * @param _height 图片水印高度，不填为图片原始高度。
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
                     * 获取添加图片水印的开始时间,单位：ms。
                     * @return StartTime 添加图片水印的开始时间,单位：ms。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置添加图片水印的开始时间,单位：ms。
                     * @param _startTime 添加图片水印的开始时间,单位：ms。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取添加图片水印的结束时间,单位：ms。
                     * @return EndTime 添加图片水印的结束时间,单位：ms。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置添加图片水印的结束时间,单位：ms。
                     * @param _endTime 添加图片水印的结束时间,单位：ms。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 图片水印的X坐标。
                     */
                    int64_t m_posX;
                    bool m_posXHasBeenSet;

                    /**
                     * 图片水印的Y坐标 。
                     */
                    int64_t m_posY;
                    bool m_posYHasBeenSet;

                    /**
                     * 图片水印路径,，如果不从Cos拉取水印，则必填
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 图片水印的Cos 信息，从Cos上拉取图片水印时必填。
                     */
                    CosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                    /**
                     * 图片水印宽度，不填为图片原始宽度。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 图片水印高度，不填为图片原始高度。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 添加图片水印的开始时间,单位：ms。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 添加图片水印的结束时间,单位：ms。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_PICMARKINFOITEM_H_
