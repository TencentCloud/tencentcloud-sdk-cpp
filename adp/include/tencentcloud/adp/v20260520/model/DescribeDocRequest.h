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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeDoc请求参数结构体
                */
                class DescribeDocRequest : public AbstractModel
                {
                public:
                    DescribeDocRequest();
                    ~DescribeDocRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文档 ID</p>
                     * @return DocId <p>文档 ID</p>
                     * 
                     */
                    std::string GetDocId() const;

                    /**
                     * 设置<p>文档 ID</p>
                     * @param _docId <p>文档 ID</p>
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
                     * 获取<p>所属知识库 ID</p>
                     * @return KbId <p>所属知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>所属知识库 ID</p>
                     * @param _kbId <p>所属知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>字段掩码：当前支持的 Path：DocLink.CosUrl，其他未列举的字段默认都返回</p>
                     * @return ReadMask <p>字段掩码：当前支持的 Path：DocLink.CosUrl，其他未列举的字段默认都返回</p>
                     * 
                     */
                    FieldMask GetReadMask() const;

                    /**
                     * 设置<p>字段掩码：当前支持的 Path：DocLink.CosUrl，其他未列举的字段默认都返回</p>
                     * @param _readMask <p>字段掩码：当前支持的 Path：DocLink.CosUrl，其他未列举的字段默认都返回</p>
                     * 
                     */
                    void SetReadMask(const FieldMask& _readMask);

                    /**
                     * 判断参数 ReadMask 是否已赋值
                     * @return ReadMask 是否已赋值
                     * 
                     */
                    bool ReadMaskHasBeenSet() const;

                private:

                    /**
                     * <p>文档 ID</p>
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>所属知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>字段掩码：当前支持的 Path：DocLink.CosUrl，其他未列举的字段默认都返回</p>
                     */
                    FieldMask m_readMask;
                    bool m_readMaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCREQUEST_H_
