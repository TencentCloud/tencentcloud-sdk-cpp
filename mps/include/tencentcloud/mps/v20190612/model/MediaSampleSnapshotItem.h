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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASAMPLESNAPSHOTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASAMPLESNAPSHOTITEM_H_

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
                * 采样截图信息
                */
                class MediaSampleSnapshotItem : public AbstractModel
                {
                public:
                    MediaSampleSnapshotItem();
                    ~MediaSampleSnapshotItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>采样截图规格 ID，参见<a href="https://cloud.tencent.com/document/product/266/33480#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF">采样截图参数模板</a>。</p>
                     * @return Definition <p>采样截图规格 ID，参见<a href="https://cloud.tencent.com/document/product/266/33480#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF">采样截图参数模板</a>。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>采样截图规格 ID，参见<a href="https://cloud.tencent.com/document/product/266/33480#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF">采样截图参数模板</a>。</p>
                     * @param _definition <p>采样截图规格 ID，参见<a href="https://cloud.tencent.com/document/product/266/33480#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF">采样截图参数模板</a>。</p>
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
                     * 获取<p>采样方式，取值范围：</p><li>Percent：根据百分比间隔采样。</li><li>Time：根据时间间隔采样。</li>
                     * @return SampleType <p>采样方式，取值范围：</p><li>Percent：根据百分比间隔采样。</li><li>Time：根据时间间隔采样。</li>
                     * 
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置<p>采样方式，取值范围：</p><li>Percent：根据百分比间隔采样。</li><li>Time：根据时间间隔采样。</li>
                     * @param _sampleType <p>采样方式，取值范围：</p><li>Percent：根据百分比间隔采样。</li><li>Time：根据时间间隔采样。</li>
                     * 
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     * 
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取<p>采样间隔</p><li>当 SampleType 为 Percent 时，该值表示多少百分比一张图。</li><li>当 SampleType 为 Time 时，该值表示多少时间间隔一张图，单位秒， 第一张图均为视频首帧。</li>
                     * @return Interval <p>采样间隔</p><li>当 SampleType 为 Percent 时，该值表示多少百分比一张图。</li><li>当 SampleType 为 Time 时，该值表示多少时间间隔一张图，单位秒， 第一张图均为视频首帧。</li>
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置<p>采样间隔</p><li>当 SampleType 为 Percent 时，该值表示多少百分比一张图。</li><li>当 SampleType 为 Time 时，该值表示多少时间间隔一张图，单位秒， 第一张图均为视频首帧。</li>
                     * @param _interval <p>采样间隔</p><li>当 SampleType 为 Percent 时，该值表示多少百分比一张图。</li><li>当 SampleType 为 Time 时，该值表示多少时间间隔一张图，单位秒， 第一张图均为视频首帧。</li>
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取<p>截图后文件的存储位置。</p>
                     * @return Storage <p>截图后文件的存储位置。</p>
                     * 
                     */
                    TaskOutputStorage GetStorage() const;

                    /**
                     * 设置<p>截图后文件的存储位置。</p>
                     * @param _storage <p>截图后文件的存储位置。</p>
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
                     * 获取<p>生成的截图 path 列表。</p>
                     * @return ImagePathSet <p>生成的截图 path 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetImagePathSet() const;

                    /**
                     * 设置<p>生成的截图 path 列表。</p>
                     * @param _imagePathSet <p>生成的截图 path 列表。</p>
                     * 
                     */
                    void SetImagePathSet(const std::vector<std::string>& _imagePathSet);

                    /**
                     * 判断参数 ImagePathSet 是否已赋值
                     * @return ImagePathSet 是否已赋值
                     * 
                     */
                    bool ImagePathSetHasBeenSet() const;

                    /**
                     * 获取<p>截图如果被打上了水印，被打水印的模板 ID 列表。</p>
                     * @return WaterMarkDefinition <p>截图如果被打上了水印，被打水印的模板 ID 列表。</p>
                     * 
                     */
                    std::vector<int64_t> GetWaterMarkDefinition() const;

                    /**
                     * 设置<p>截图如果被打上了水印，被打水印的模板 ID 列表。</p>
                     * @param _waterMarkDefinition <p>截图如果被打上了水印，被打水印的模板 ID 列表。</p>
                     * 
                     */
                    void SetWaterMarkDefinition(const std::vector<int64_t>& _waterMarkDefinition);

                    /**
                     * 判断参数 WaterMarkDefinition 是否已赋值
                     * @return WaterMarkDefinition 是否已赋值
                     * 
                     */
                    bool WaterMarkDefinitionHasBeenSet() const;

                private:

                    /**
                     * <p>采样截图规格 ID，参见<a href="https://cloud.tencent.com/document/product/266/33480#.E9.87.87.E6.A0.B7.E6.88.AA.E5.9B.BE.E6.A8.A1.E6.9D.BF">采样截图参数模板</a>。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>采样方式，取值范围：</p><li>Percent：根据百分比间隔采样。</li><li>Time：根据时间间隔采样。</li>
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * <p>采样间隔</p><li>当 SampleType 为 Percent 时，该值表示多少百分比一张图。</li><li>当 SampleType 为 Time 时，该值表示多少时间间隔一张图，单位秒， 第一张图均为视频首帧。</li>
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * <p>截图后文件的存储位置。</p>
                     */
                    TaskOutputStorage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>生成的截图 path 列表。</p>
                     */
                    std::vector<std::string> m_imagePathSet;
                    bool m_imagePathSetHasBeenSet;

                    /**
                     * <p>截图如果被打上了水印，被打水印的模板 ID 列表。</p>
                     */
                    std::vector<int64_t> m_waterMarkDefinition;
                    bool m_waterMarkDefinitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MEDIASAMPLESNAPSHOTITEM_H_
