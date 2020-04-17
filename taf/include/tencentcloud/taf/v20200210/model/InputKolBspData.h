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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_INPUTKOLBSPDATA_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_INPUTKOLBSPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/taf/v20200210/model/InputKolDataList.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CheckKol
                */
                class InputKolBspData : public AbstractModel
                {
                public:
                    InputKolBspData();
                    ~InputKolBspData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取BspData
                     * @return DataList BspData
                     */
                    std::vector<InputKolDataList> GetDataList() const;

                    /**
                     * 设置BspData
                     * @param DataList BspData
                     */
                    void SetDataList(const std::vector<InputKolDataList>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * BspData
                     */
                    std::vector<InputKolDataList> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_INPUTKOLBSPDATA_H_
