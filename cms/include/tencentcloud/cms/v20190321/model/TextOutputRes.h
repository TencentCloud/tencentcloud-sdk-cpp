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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_TEXTOUTPUTRES_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_TEXTOUTPUTRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 消息类输出结果参数
                */
                class TextOutputRes : public AbstractModel
                {
                public:
                    TextOutputRes();
                    ~TextOutputRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作人,信安处理人企业微信ID
                     * @return Operator 操作人,信安处理人企业微信ID
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人,信安处理人企业微信ID
                     * @param _operator 操作人,信安处理人企业微信ID
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取恶意类型，广告（10001）， 政治（20001）， 色情（20002）， 社会事件（20004）， 暴力（20011）， 低俗（20012）， 违法犯罪（20006）， 欺诈（20008）， 版权（20013）， 谣言（20104）， 其他（21000）
                     * @return ResultType 恶意类型，广告（10001）， 政治（20001）， 色情（20002）， 社会事件（20004）， 暴力（20011）， 低俗（20012）， 违法犯罪（20006）， 欺诈（20008）， 版权（20013）， 谣言（20104）， 其他（21000）
                     * 
                     */
                    int64_t GetResultType() const;

                    /**
                     * 设置恶意类型，广告（10001）， 政治（20001）， 色情（20002）， 社会事件（20004）， 暴力（20011）， 低俗（20012）， 违法犯罪（20006）， 欺诈（20008）， 版权（20013）， 谣言（20104）， 其他（21000）
                     * @param _resultType 恶意类型，广告（10001）， 政治（20001）， 色情（20002）， 社会事件（20004）， 暴力（20011）， 低俗（20012）， 违法犯罪（20006）， 欺诈（20008）， 版权（20013）， 谣言（20104）， 其他（21000）
                     * 
                     */
                    void SetResultType(const int64_t& _resultType);

                    /**
                     * 判断参数 ResultType 是否已赋值
                     * @return ResultType 是否已赋值
                     * 
                     */
                    bool ResultTypeHasBeenSet() const;

                    /**
                     * 获取恶意操作码，
删除（1）， 通过（2）， 先审后发（100012）
                     * @return ResultCode 恶意操作码，
删除（1）， 通过（2）， 先审后发（100012）
                     * 
                     */
                    int64_t GetResultCode() const;

                    /**
                     * 设置恶意操作码，
删除（1）， 通过（2）， 先审后发（100012）
                     * @param _resultCode 恶意操作码，
删除（1）， 通过（2）， 先审后发（100012）
                     * 
                     */
                    void SetResultCode(const int64_t& _resultCode);

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     * 
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取操作结果备注说明
                     * @return ResultMsg 操作结果备注说明
                     * 
                     */
                    std::string GetResultMsg() const;

                    /**
                     * 设置操作结果备注说明
                     * @param _resultMsg 操作结果备注说明
                     * 
                     */
                    void SetResultMsg(const std::string& _resultMsg);

                    /**
                     * 判断参数 ResultMsg 是否已赋值
                     * @return ResultMsg 是否已赋值
                     * 
                     */
                    bool ResultMsgHasBeenSet() const;

                private:

                    /**
                     * 操作人,信安处理人企业微信ID
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 恶意类型，广告（10001）， 政治（20001）， 色情（20002）， 社会事件（20004）， 暴力（20011）， 低俗（20012）， 违法犯罪（20006）， 欺诈（20008）， 版权（20013）， 谣言（20104）， 其他（21000）
                     */
                    int64_t m_resultType;
                    bool m_resultTypeHasBeenSet;

                    /**
                     * 恶意操作码，
删除（1）， 通过（2）， 先审后发（100012）
                     */
                    int64_t m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 操作结果备注说明
                     */
                    std::string m_resultMsg;
                    bool m_resultMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_TEXTOUTPUTRES_H_
