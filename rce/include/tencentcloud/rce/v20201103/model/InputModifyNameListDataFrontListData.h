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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMODIFYNAMELISTDATAFRONTLISTDATA_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMODIFYNAMELISTDATAFRONTLISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/InputModifyNameListDataFront.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 修改黑白名单数据入参
                */
                class InputModifyNameListDataFrontListData : public AbstractModel
                {
                public:
                    InputModifyNameListDataFrontListData();
                    ~InputModifyNameListDataFrontListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名单数据集合
                     * @return DataList 名单数据集合
                     * 
                     */
                    std::vector<InputModifyNameListDataFront> GetDataList() const;

                    /**
                     * 设置名单数据集合
                     * @param _dataList 名单数据集合
                     * 
                     */
                    void SetDataList(const std::vector<InputModifyNameListDataFront>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * 
                     */
                    bool DataListHasBeenSet() const;

                private:

                    /**
                     * 名单数据集合
                     */
                    std::vector<InputModifyNameListDataFront> m_dataList;
                    bool m_dataListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTMODIFYNAMELISTDATAFRONTLISTDATA_H_
