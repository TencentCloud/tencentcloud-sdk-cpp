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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ROLLBACKDATAENGINEIMAGEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ROLLBACKDATAENGINEIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * RollbackDataEngineImage请求参数结构体
                */
                class RollbackDataEngineImageRequest : public AbstractModel
                {
                public:
                    RollbackDataEngineImageRequest();
                    ~RollbackDataEngineImageRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取检查是否能回滚的接口返回的FromRecordId参数
                     * @return FromRecordId 检查是否能回滚的接口返回的FromRecordId参数
                     * 
                     */
                    std::string GetFromRecordId() const;

                    /**
                     * 设置检查是否能回滚的接口返回的FromRecordId参数
                     * @param _fromRecordId 检查是否能回滚的接口返回的FromRecordId参数
                     * 
                     */
                    void SetFromRecordId(const std::string& _fromRecordId);

                    /**
                     * 判断参数 FromRecordId 是否已赋值
                     * @return FromRecordId 是否已赋值
                     * 
                     */
                    bool FromRecordIdHasBeenSet() const;

                    /**
                     * 获取检查是否能回滚的接口返回的ToRecordId参数
                     * @return ToRecordId 检查是否能回滚的接口返回的ToRecordId参数
                     * 
                     */
                    std::string GetToRecordId() const;

                    /**
                     * 设置检查是否能回滚的接口返回的ToRecordId参数
                     * @param _toRecordId 检查是否能回滚的接口返回的ToRecordId参数
                     * 
                     */
                    void SetToRecordId(const std::string& _toRecordId);

                    /**
                     * 判断参数 ToRecordId 是否已赋值
                     * @return ToRecordId 是否已赋值
                     * 
                     */
                    bool ToRecordIdHasBeenSet() const;

                private:

                    /**
                     * 引擎ID
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 检查是否能回滚的接口返回的FromRecordId参数
                     */
                    std::string m_fromRecordId;
                    bool m_fromRecordIdHasBeenSet;

                    /**
                     * 检查是否能回滚的接口返回的ToRecordId参数
                     */
                    std::string m_toRecordId;
                    bool m_toRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ROLLBACKDATAENGINEIMAGEREQUEST_H_
