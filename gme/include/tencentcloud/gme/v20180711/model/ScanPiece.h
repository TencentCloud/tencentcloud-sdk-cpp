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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_SCANPIECE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_SCANPIECE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/ScanDetail.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 语音检测结果，Code 为 0 时返回
                */
                class ScanPiece : public AbstractModel
                {
                public:
                    ScanPiece();
                    ~ScanPiece() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流检测时返回，音频转存地址，保留30min
                     * @return DumpUrl 流检测时返回，音频转存地址，保留30min
                     * 
                     */
                    std::string GetDumpUrl() const;

                    /**
                     * 设置流检测时返回，音频转存地址，保留30min
                     * @param _dumpUrl 流检测时返回，音频转存地址，保留30min
                     * 
                     */
                    void SetDumpUrl(const std::string& _dumpUrl);

                    /**
                     * 判断参数 DumpUrl 是否已赋值
                     * @return DumpUrl 是否已赋值
                     * 
                     */
                    bool DumpUrlHasBeenSet() const;

                    /**
                     * 获取是否违规
                     * @return HitFlag 是否违规
                     * 
                     */
                    bool GetHitFlag() const;

                    /**
                     * 设置是否违规
                     * @param _hitFlag 是否违规
                     * 
                     */
                    void SetHitFlag(const bool& _hitFlag);

                    /**
                     * 判断参数 HitFlag 是否已赋值
                     * @return HitFlag 是否已赋值
                     * 
                     */
                    bool HitFlagHasBeenSet() const;

                    /**
                     * 获取违规主要类型
                     * @return MainType 违规主要类型
                     * 
                     */
                    std::string GetMainType() const;

                    /**
                     * 设置违规主要类型
                     * @param _mainType 违规主要类型
                     * 
                     */
                    void SetMainType(const std::string& _mainType);

                    /**
                     * 判断参数 MainType 是否已赋值
                     * @return MainType 是否已赋值
                     * 
                     */
                    bool MainTypeHasBeenSet() const;

                    /**
                     * 获取语音检测详情
                     * @return ScanDetail 语音检测详情
                     * 
                     */
                    std::vector<ScanDetail> GetScanDetail() const;

                    /**
                     * 设置语音检测详情
                     * @param _scanDetail 语音检测详情
                     * 
                     */
                    void SetScanDetail(const std::vector<ScanDetail>& _scanDetail);

                    /**
                     * 判断参数 ScanDetail 是否已赋值
                     * @return ScanDetail 是否已赋值
                     * 
                     */
                    bool ScanDetailHasBeenSet() const;

                    /**
                     * 获取gme实时语音房间ID，透传任务传入时的RoomId
                     * @return RoomId gme实时语音房间ID，透传任务传入时的RoomId
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置gme实时语音房间ID，透传任务传入时的RoomId
                     * @param _roomId gme实时语音房间ID，透传任务传入时的RoomId
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
                     * 获取gme实时语音用户ID，透传任务传入时的OpenId
                     * @return OpenId gme实时语音用户ID，透传任务传入时的OpenId
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置gme实时语音用户ID，透传任务传入时的OpenId
                     * @param _openId gme实时语音用户ID，透传任务传入时的OpenId
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Info 备注
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置备注
                     * @param _info 备注
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取流检测时分片在流中的偏移时间，单位毫秒
                     * @return Offset 流检测时分片在流中的偏移时间，单位毫秒
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置流检测时分片在流中的偏移时间，单位毫秒
                     * @param _offset 流检测时分片在流中的偏移时间，单位毫秒
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取流检测时分片时长
                     * @return Duration 流检测时分片时长
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置流检测时分片时长
                     * @param _duration 流检测时分片时长
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取分片开始检测时间
                     * @return PieceStartTime 分片开始检测时间
                     * 
                     */
                    uint64_t GetPieceStartTime() const;

                    /**
                     * 设置分片开始检测时间
                     * @param _pieceStartTime 分片开始检测时间
                     * 
                     */
                    void SetPieceStartTime(const uint64_t& _pieceStartTime);

                    /**
                     * 判断参数 PieceStartTime 是否已赋值
                     * @return PieceStartTime 是否已赋值
                     * 
                     */
                    bool PieceStartTimeHasBeenSet() const;

                private:

                    /**
                     * 流检测时返回，音频转存地址，保留30min
                     */
                    std::string m_dumpUrl;
                    bool m_dumpUrlHasBeenSet;

                    /**
                     * 是否违规
                     */
                    bool m_hitFlag;
                    bool m_hitFlagHasBeenSet;

                    /**
                     * 违规主要类型
                     */
                    std::string m_mainType;
                    bool m_mainTypeHasBeenSet;

                    /**
                     * 语音检测详情
                     */
                    std::vector<ScanDetail> m_scanDetail;
                    bool m_scanDetailHasBeenSet;

                    /**
                     * gme实时语音房间ID，透传任务传入时的RoomId
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * gme实时语音用户ID，透传任务传入时的OpenId
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 流检测时分片在流中的偏移时间，单位毫秒
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 流检测时分片时长
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 分片开始检测时间
                     */
                    uint64_t m_pieceStartTime;
                    bool m_pieceStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_SCANPIECE_H_
