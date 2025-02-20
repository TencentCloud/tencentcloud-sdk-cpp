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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINESCALEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINESCALEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineScaleInfoDetail.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 引擎规格详情
                */
                class DataEngineScaleInfo : public AbstractModel
                {
                public:
                    DataEngineScaleInfo();
                    ~DataEngineScaleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引擎ID
                     * @return DataEngineId 引擎ID
                     * 
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置引擎ID
                     * @param _dataEngineId 引擎ID
                     * 
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     * 
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取引擎名称
                     * @return DataEngineName 引擎名称
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置引擎名称
                     * @param _dataEngineName 引擎名称
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取引擎规格详情
                     * @return ScaleDetail 引擎规格详情
                     * 
                     */
                    std::vector<DataEngineScaleInfoDetail> GetScaleDetail() const;

                    /**
                     * 设置引擎规格详情
                     * @param _scaleDetail 引擎规格详情
                     * 
                     */
                    void SetScaleDetail(const std::vector<DataEngineScaleInfoDetail>& _scaleDetail);

                    /**
                     * 判断参数 ScaleDetail 是否已赋值
                     * @return ScaleDetail 是否已赋值
                     * 
                     */
                    bool ScaleDetailHasBeenSet() const;

                private:

                    /**
                     * 引擎ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 引擎名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 引擎规格详情
                     */
                    std::vector<DataEngineScaleInfoDetail> m_scaleDetail;
                    bool m_scaleDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINESCALEINFO_H_
