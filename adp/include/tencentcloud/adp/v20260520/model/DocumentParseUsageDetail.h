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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DOCUMENTPARSEUSAGEDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DOCUMENTPARSEUSAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 文档解析单次调用明细
                */
                class DocumentParseUsageDetail : public AbstractModel
                {
                public:
                    DocumentParseUsageDetail();
                    ~DocumentParseUsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>消耗资源数（PU）</p>
                     * @return ConsumptionPu <p>消耗资源数（PU）</p>
                     * 
                     */
                    double GetConsumptionPu() const;

                    /**
                     * 设置<p>消耗资源数（PU）</p>
                     * @param _consumptionPu <p>消耗资源数（PU）</p>
                     * 
                     */
                    void SetConsumptionPu(const double& _consumptionPu);

                    /**
                     * 判断参数 ConsumptionPu 是否已赋值
                     * @return ConsumptionPu 是否已赋值
                     * 
                     */
                    bool ConsumptionPuHasBeenSet() const;

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
                     * 获取<p>文档解析方式：离线文档解析、实时文档解析。上报值 OfflineUpload 对应离线文档解析；RealtimeUpload、RealTimeDocParse 对应实时文档解析</p>
                     * @return DocUsageMethod <p>文档解析方式：离线文档解析、实时文档解析。上报值 OfflineUpload 对应离线文档解析；RealtimeUpload、RealTimeDocParse 对应实时文档解析</p>
                     * 
                     */
                    std::string GetDocUsageMethod() const;

                    /**
                     * 设置<p>文档解析方式：离线文档解析、实时文档解析。上报值 OfflineUpload 对应离线文档解析；RealtimeUpload、RealTimeDocParse 对应实时文档解析</p>
                     * @param _docUsageMethod <p>文档解析方式：离线文档解析、实时文档解析。上报值 OfflineUpload 对应离线文档解析；RealtimeUpload、RealTimeDocParse 对应实时文档解析</p>
                     * 
                     */
                    void SetDocUsageMethod(const std::string& _docUsageMethod);

                    /**
                     * 判断参数 DocUsageMethod 是否已赋值
                     * @return DocUsageMethod 是否已赋值
                     * 
                     */
                    bool DocUsageMethodHasBeenSet() const;

                    /**
                     * 获取<p>知识库 ID</p>
                     * @return KbId <p>知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>知识库 ID</p>
                     * @param _kbId <p>知识库 ID</p>
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
                     * 获取<p>解析页数</p>
                     * @return ParsedPageCount <p>解析页数</p>
                     * 
                     */
                    std::string GetParsedPageCount() const;

                    /**
                     * 设置<p>解析页数</p>
                     * @param _parsedPageCount <p>解析页数</p>
                     * 
                     */
                    void SetParsedPageCount(const std::string& _parsedPageCount);

                    /**
                     * 判断参数 ParsedPageCount 是否已赋值
                     * @return ParsedPageCount 是否已赋值
                     * 
                     */
                    bool ParsedPageCountHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>消耗资源数（PU）</p>
                     */
                    double m_consumptionPu;
                    bool m_consumptionPuHasBeenSet;

                    /**
                     * <p>文档 ID</p>
                     */
                    std::string m_docId;
                    bool m_docIdHasBeenSet;

                    /**
                     * <p>文档解析方式：离线文档解析、实时文档解析。上报值 OfflineUpload 对应离线文档解析；RealtimeUpload、RealTimeDocParse 对应实时文档解析</p>
                     */
                    std::string m_docUsageMethod;
                    bool m_docUsageMethodHasBeenSet;

                    /**
                     * <p>知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>解析页数</p>
                     */
                    std::string m_parsedPageCount;
                    bool m_parsedPageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DOCUMENTPARSEUSAGEDETAIL_H_
