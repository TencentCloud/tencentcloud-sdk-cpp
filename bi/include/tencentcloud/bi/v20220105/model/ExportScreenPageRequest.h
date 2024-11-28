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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_EXPORTSCREENPAGEREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_EXPORTSCREENPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * ExportScreenPage请求参数结构体
                */
                class ExportScreenPageRequest : public AbstractModel
                {
                public:
                    ExportScreenPageRequest();
                    ~ExportScreenPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取页面id
                     * @return PageId 页面id
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置页面id
                     * @param _pageId 页面id
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取画布类型。栅格画布：GRID；自由画布：FREE
                     * @return CanvasType 画布类型。栅格画布：GRID；自由画布：FREE
                     * 
                     */
                    std::string GetCanvasType() const;

                    /**
                     * 设置画布类型。栅格画布：GRID；自由画布：FREE
                     * @param _canvasType 画布类型。栅格画布：GRID；自由画布：FREE
                     * 
                     */
                    void SetCanvasType(const std::string& _canvasType);

                    /**
                     * 判断参数 CanvasType 是否已赋值
                     * @return CanvasType 是否已赋值
                     * 
                     */
                    bool CanvasTypeHasBeenSet() const;

                    /**
                     * 获取图片导出类型。base64；url（有效期：1天）
                     * @return PicType 图片导出类型。base64；url（有效期：1天）
                     * 
                     */
                    std::string GetPicType() const;

                    /**
                     * 设置图片导出类型。base64；url（有效期：1天）
                     * @param _picType 图片导出类型。base64；url（有效期：1天）
                     * 
                     */
                    void SetPicType(const std::string& _picType);

                    /**
                     * 判断参数 PicType 是否已赋值
                     * @return PicType 是否已赋值
                     * 
                     */
                    bool PicTypeHasBeenSet() const;

                    /**
                     * 获取组件Ids。为空时，导出整个页面
                     * @return WidgetIds 组件Ids。为空时，导出整个页面
                     * 
                     */
                    std::vector<std::string> GetWidgetIds() const;

                    /**
                     * 设置组件Ids。为空时，导出整个页面
                     * @param _widgetIds 组件Ids。为空时，导出整个页面
                     * 
                     */
                    void SetWidgetIds(const std::vector<std::string>& _widgetIds);

                    /**
                     * 判断参数 WidgetIds 是否已赋值
                     * @return WidgetIds 是否已赋值
                     * 
                     */
                    bool WidgetIdsHasBeenSet() const;

                    /**
                     * 获取是否是异步请求
                     * @return AsyncRequest 是否是异步请求
                     * 
                     */
                    bool GetAsyncRequest() const;

                    /**
                     * 设置是否是异步请求
                     * @param _asyncRequest 是否是异步请求
                     * 
                     */
                    void SetAsyncRequest(const bool& _asyncRequest);

                    /**
                     * 判断参数 AsyncRequest 是否已赋值
                     * @return AsyncRequest 是否已赋值
                     * 
                     */
                    bool AsyncRequestHasBeenSet() const;

                    /**
                     * 获取事务id
                     * @return TranId 事务id
                     * 
                     */
                    std::string GetTranId() const;

                    /**
                     * 设置事务id
                     * @param _tranId 事务id
                     * 
                     */
                    void SetTranId(const std::string& _tranId);

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     * 
                     */
                    bool TranIdHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页面id
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 画布类型。栅格画布：GRID；自由画布：FREE
                     */
                    std::string m_canvasType;
                    bool m_canvasTypeHasBeenSet;

                    /**
                     * 图片导出类型。base64；url（有效期：1天）
                     */
                    std::string m_picType;
                    bool m_picTypeHasBeenSet;

                    /**
                     * 组件Ids。为空时，导出整个页面
                     */
                    std::vector<std::string> m_widgetIds;
                    bool m_widgetIdsHasBeenSet;

                    /**
                     * 是否是异步请求
                     */
                    bool m_asyncRequest;
                    bool m_asyncRequestHasBeenSet;

                    /**
                     * 事务id
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_EXPORTSCREENPAGEREQUEST_H_
