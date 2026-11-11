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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_BATCHINDEXRESULT_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_BATCHINDEXRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 批量索引操作的逐项结果，用于 DeleteIndex（批量删除）和 ModifyIndexStatus（批量关闭/打开索引）的返回值。
                */
                class BatchIndexResult : public AbstractModel
                {
                public:
                    BatchIndexResult();
                    ~BatchIndexResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>索引名</p>
                     * @return IndexName <p>索引名</p>
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置<p>索引名</p>
                     * @param _indexName <p>索引名</p>
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取<p>该项是否成功</p>
                     * @return Success <p>该项是否成功</p>
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 设置<p>该项是否成功</p>
                     * @param _success <p>该项是否成功</p>
                     * 
                     */
                    void SetSuccess(const bool& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取<p>失败时的错误码，成功时不返回</p>
                     * @return ErrCode <p>失败时的错误码，成功时不返回</p>
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置<p>失败时的错误码，成功时不返回</p>
                     * @param _errCode <p>失败时的错误码，成功时不返回</p>
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取<p>失败时的错误信息，成功时不返回</p>
                     * @return ErrMsg <p>失败时的错误信息，成功时不返回</p>
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置<p>失败时的错误信息，成功时不返回</p>
                     * @param _errMsg <p>失败时的错误信息，成功时不返回</p>
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * <p>索引名</p>
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * <p>该项是否成功</p>
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                    /**
                     * <p>失败时的错误码，成功时不返回</p>
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * <p>失败时的错误信息，成功时不返回</p>
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_BATCHINDEXRESULT_H_
