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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_VEHICLEINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_VEHICLEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 车型车系信息
                */
                class VehicleInfo : public AbstractModel
                {
                public:
                    VehicleInfo();
                    ~VehicleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取品牌id
                     * @return BrandId 品牌id
                     * 
                     */
                    uint64_t GetBrandId() const;

                    /**
                     * 设置品牌id
                     * @param _brandId 品牌id
                     * 
                     */
                    void SetBrandId(const uint64_t& _brandId);

                    /**
                     * 判断参数 BrandId 是否已赋值
                     * @return BrandId 是否已赋值
                     * 
                     */
                    bool BrandIdHasBeenSet() const;

                    /**
                     * 获取品牌名称
                     * @return BrandName 品牌名称
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置品牌名称
                     * @param _brandName 品牌名称
                     * 
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     * 
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取车系id
                     * @return SeriesId 车系id
                     * 
                     */
                    uint64_t GetSeriesId() const;

                    /**
                     * 设置车系id
                     * @param _seriesId 车系id
                     * 
                     */
                    void SetSeriesId(const uint64_t& _seriesId);

                    /**
                     * 判断参数 SeriesId 是否已赋值
                     * @return SeriesId 是否已赋值
                     * 
                     */
                    bool SeriesIdHasBeenSet() const;

                    /**
                     * 获取车系名称
                     * @return SeriesName 车系名称
                     * 
                     */
                    std::string GetSeriesName() const;

                    /**
                     * 设置车系名称
                     * @param _seriesName 车系名称
                     * 
                     */
                    void SetSeriesName(const std::string& _seriesName);

                    /**
                     * 判断参数 SeriesName 是否已赋值
                     * @return SeriesName 是否已赋值
                     * 
                     */
                    bool SeriesNameHasBeenSet() const;

                    /**
                     * 获取车型id
                     * @return ModelId 车型id
                     * 
                     */
                    uint64_t GetModelId() const;

                    /**
                     * 设置车型id
                     * @param _modelId 车型id
                     * 
                     */
                    void SetModelId(const uint64_t& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取车型名称
                     * @return ModelName 车型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置车型名称
                     * @param _modelName 车型名称
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                private:

                    /**
                     * 品牌id
                     */
                    uint64_t m_brandId;
                    bool m_brandIdHasBeenSet;

                    /**
                     * 品牌名称
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 车系id
                     */
                    uint64_t m_seriesId;
                    bool m_seriesIdHasBeenSet;

                    /**
                     * 车系名称
                     */
                    std::string m_seriesName;
                    bool m_seriesNameHasBeenSet;

                    /**
                     * 车型id
                     */
                    uint64_t m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 车型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_VEHICLEINFO_H_
