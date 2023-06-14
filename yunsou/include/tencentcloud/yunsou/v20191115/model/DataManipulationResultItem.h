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

#ifndef TENCENTCLOUD_YUNSOU_V20191115_MODEL_DATAMANIPULATIONRESULTITEM_H_
#define TENCENTCLOUD_YUNSOU_V20191115_MODEL_DATAMANIPULATIONRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunsou
    {
        namespace V20191115
        {
            namespace Model
            {
                /**
                * 数据操作结果明细
                */
                class DataManipulationResultItem : public AbstractModel
                {
                public:
                    DataManipulationResultItem();
                    ~DataManipulationResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果
                     * @return Result 结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置结果
                     * @param _result 结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取文档ID
                     * @return DocId 文档ID
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置文档ID
                     * @param _docId 文档ID
                     * 
                     */
                    void SetDocId(const std::string& _docId);

                    /**
                     * 判断参数 DocId 是否已赋值
                     * @return DocId 是否已赋值
                     * 
                     */
                    bool DocIdHasBeenSet() const;

                    /**
                     * 获取错误码
                     * @return Errno 错误码
                     * 
                     */
                    int64_t GetErrno() const;

                    /**
                     * 设置错误码
                     * @param _errno 错误码
                     * 
                     */
                    void SetErrno(const int64_t& _errno);

                    /**
                     * 判断参数 Errno 是否已赋值
                     * @return Errno 是否已赋值
                     * 
                     */
                    bool ErrnoHasBeenSet() const;

                private:

                    /**
                     * 结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 文档ID
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * 错误码
                     */
                    int64_t m_errno;
                    bool m_errnoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNSOU_V20191115_MODEL_DATAMANIPULATIONRESULTITEM_H_
