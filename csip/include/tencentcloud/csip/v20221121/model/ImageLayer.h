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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGELAYER_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGELAYER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像层信息
                */
                class ImageLayer : public AbstractModel
                {
                public:
                    ImageLayer();
                    ~ImageLayer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像层序号</p>
                     * @return LayerIndex <p>镜像层序号</p>
                     * 
                     */
                    uint64_t GetLayerIndex() const;

                    /**
                     * 设置<p>镜像层序号</p>
                     * @param _layerIndex <p>镜像层序号</p>
                     * 
                     */
                    void SetLayerIndex(const uint64_t& _layerIndex);

                    /**
                     * 判断参数 LayerIndex 是否已赋值
                     * @return LayerIndex 是否已赋值
                     * 
                     */
                    bool LayerIndexHasBeenSet() const;

                    /**
                     * 获取<p>镜像层id</p>
                     * @return LayerId <p>镜像层id</p>
                     * 
                     */
                    std::string GetLayerId() const;

                    /**
                     * 设置<p>镜像层id</p>
                     * @param _layerId <p>镜像层id</p>
                     * 
                     */
                    void SetLayerId(const std::string& _layerId);

                    /**
                     * 判断参数 LayerId 是否已赋值
                     * @return LayerId 是否已赋值
                     * 
                     */
                    bool LayerIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像层命令行</p>
                     * @return LayerCmd <p>镜像层命令行</p>
                     * 
                     */
                    std::string GetLayerCmd() const;

                    /**
                     * 设置<p>镜像层命令行</p>
                     * @param _layerCmd <p>镜像层命令行</p>
                     * 
                     */
                    void SetLayerCmd(const std::string& _layerCmd);

                    /**
                     * 判断参数 LayerCmd 是否已赋值
                     * @return LayerCmd 是否已赋值
                     * 
                     */
                    bool LayerCmdHasBeenSet() const;

                    /**
                     * 获取<p>镜像层大小</p>
                     * @return Size <p>镜像层大小</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>镜像层大小</p>
                     * @param _size <p>镜像层大小</p>
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>严重漏洞数</p>
                     * @return CriticalLevelVulCnt <p>严重漏洞数</p>
                     * 
                     */
                    uint64_t GetCriticalLevelVulCnt() const;

                    /**
                     * 设置<p>严重漏洞数</p>
                     * @param _criticalLevelVulCnt <p>严重漏洞数</p>
                     * 
                     */
                    void SetCriticalLevelVulCnt(const uint64_t& _criticalLevelVulCnt);

                    /**
                     * 判断参数 CriticalLevelVulCnt 是否已赋值
                     * @return CriticalLevelVulCnt 是否已赋值
                     * 
                     */
                    bool CriticalLevelVulCntHasBeenSet() const;

                    /**
                     * 获取<p>高危漏洞数</p>
                     * @return HighLevelVulCnt <p>高危漏洞数</p>
                     * 
                     */
                    uint64_t GetHighLevelVulCnt() const;

                    /**
                     * 设置<p>高危漏洞数</p>
                     * @param _highLevelVulCnt <p>高危漏洞数</p>
                     * 
                     */
                    void SetHighLevelVulCnt(const uint64_t& _highLevelVulCnt);

                    /**
                     * 判断参数 HighLevelVulCnt 是否已赋值
                     * @return HighLevelVulCnt 是否已赋值
                     * 
                     */
                    bool HighLevelVulCntHasBeenSet() const;

                    /**
                     * 获取<p>中危漏洞数</p>
                     * @return MediumLevelVulCnt <p>中危漏洞数</p>
                     * 
                     */
                    uint64_t GetMediumLevelVulCnt() const;

                    /**
                     * 设置<p>中危漏洞数</p>
                     * @param _mediumLevelVulCnt <p>中危漏洞数</p>
                     * 
                     */
                    void SetMediumLevelVulCnt(const uint64_t& _mediumLevelVulCnt);

                    /**
                     * 判断参数 MediumLevelVulCnt 是否已赋值
                     * @return MediumLevelVulCnt 是否已赋值
                     * 
                     */
                    bool MediumLevelVulCntHasBeenSet() const;

                    /**
                     * 获取<p>低危漏洞数</p>
                     * @return LowLevelVulCnt <p>低危漏洞数</p>
                     * 
                     */
                    uint64_t GetLowLevelVulCnt() const;

                    /**
                     * 设置<p>低危漏洞数</p>
                     * @param _lowLevelVulCnt <p>低危漏洞数</p>
                     * 
                     */
                    void SetLowLevelVulCnt(const uint64_t& _lowLevelVulCnt);

                    /**
                     * 判断参数 LowLevelVulCnt 是否已赋值
                     * @return LowLevelVulCnt 是否已赋值
                     * 
                     */
                    bool LowLevelVulCntHasBeenSet() const;

                    /**
                     * 获取<p>木马数</p>
                     * @return VirusCnt <p>木马数</p>
                     * 
                     */
                    uint64_t GetVirusCnt() const;

                    /**
                     * 设置<p>木马数</p>
                     * @param _virusCnt <p>木马数</p>
                     * 
                     */
                    void SetVirusCnt(const uint64_t& _virusCnt);

                    /**
                     * 判断参数 VirusCnt 是否已赋值
                     * @return VirusCnt 是否已赋值
                     * 
                     */
                    bool VirusCntHasBeenSet() const;

                    /**
                     * 获取<p>敏感信息数</p>
                     * @return SensitiveCnt <p>敏感信息数</p>
                     * 
                     */
                    uint64_t GetSensitiveCnt() const;

                    /**
                     * 设置<p>敏感信息数</p>
                     * @param _sensitiveCnt <p>敏感信息数</p>
                     * 
                     */
                    void SetSensitiveCnt(const uint64_t& _sensitiveCnt);

                    /**
                     * 判断参数 SensitiveCnt 是否已赋值
                     * @return SensitiveCnt 是否已赋值
                     * 
                     */
                    bool SensitiveCntHasBeenSet() const;

                    /**
                     * 获取<p>镜像层创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return LayerCreateTime <p>镜像层创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLayerCreateTime() const;

                    /**
                     * 设置<p>镜像层创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _layerCreateTime <p>镜像层创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLayerCreateTime(const std::string& _layerCreateTime);

                    /**
                     * 判断参数 LayerCreateTime 是否已赋值
                     * @return LayerCreateTime 是否已赋值
                     * 
                     */
                    bool LayerCreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>镜像层序号</p>
                     */
                    uint64_t m_layerIndex;
                    bool m_layerIndexHasBeenSet;

                    /**
                     * <p>镜像层id</p>
                     */
                    std::string m_layerId;
                    bool m_layerIdHasBeenSet;

                    /**
                     * <p>镜像层命令行</p>
                     */
                    std::string m_layerCmd;
                    bool m_layerCmdHasBeenSet;

                    /**
                     * <p>镜像层大小</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>严重漏洞数</p>
                     */
                    uint64_t m_criticalLevelVulCnt;
                    bool m_criticalLevelVulCntHasBeenSet;

                    /**
                     * <p>高危漏洞数</p>
                     */
                    uint64_t m_highLevelVulCnt;
                    bool m_highLevelVulCntHasBeenSet;

                    /**
                     * <p>中危漏洞数</p>
                     */
                    uint64_t m_mediumLevelVulCnt;
                    bool m_mediumLevelVulCntHasBeenSet;

                    /**
                     * <p>低危漏洞数</p>
                     */
                    uint64_t m_lowLevelVulCnt;
                    bool m_lowLevelVulCntHasBeenSet;

                    /**
                     * <p>木马数</p>
                     */
                    uint64_t m_virusCnt;
                    bool m_virusCntHasBeenSet;

                    /**
                     * <p>敏感信息数</p>
                     */
                    uint64_t m_sensitiveCnt;
                    bool m_sensitiveCntHasBeenSet;

                    /**
                     * <p>镜像层创建时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_layerCreateTime;
                    bool m_layerCreateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGELAYER_H_
